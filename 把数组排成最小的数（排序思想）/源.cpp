#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//题目描述
//输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。
//例如输入数组{ 3，32，321 }，则打印出这三个数字能排成的最小数字为321323。

class Solution {
public:
	static bool cmp(int a, int b) {
		//要保证找到a，b构成的序列中，让小的放在前面
		string s1 = to_string(a);
		string s2 = to_string(b);
		//字符串拼接进行比较  a = 1  b = 23
		return s1 + s2 < s2 + s1;
	}

	string PrintMinNumber(vector<int> numbers) {
		string res = "";
		sort(numbers.begin(), numbers.end(), cmp);

		for (int i = 0; i < numbers.size(); i++) {
			res += to_string(numbers[i]);
		}
		return res;
	}
};