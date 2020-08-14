#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	//先排序
	//排序完找到第一个不为0（大小王）的牌，和后面的进行比较，要是有重复的则不满足
	//1 2 3 4 5   
	//最后一个值和第一个值相差不能大于4，不然有王也连不了顺子
	bool IsContinuous(vector<int> numbers) {
		if (numbers.size() <= 0)
			return false;

		sort(numbers.begin(), numbers.end());

		int count = 0;
		for (int i = 0; i < numbers.size(); i++) {
			if (numbers[i] == 0)
				count++;
		}

		for (int i = count; i < numbers.size(); i++) {
			//从不是王的第一个值跟后面的比较，是否为顺子
			if (numbers[i] == numbers[i + 1])
				return false;
		}

		if (numbers[numbers.size() - 1] - numbers[count] <= 4)
			return true;
		return false;
	}
};