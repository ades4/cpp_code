#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		int tmp, k = 0; //k为当前设置好的奇数的个数
		for (int i = 0; i < array.size(); i++) {
			if (array[i] % 2 != 0) {// (array[i] & 1)
				tmp = array[i];

				int j = i;
				//[begin [ k,..., j] end];
				//只管奇数的顺序
				while (j > k) {
					array[j] = array[j - 1];
					j--;
				}
				array[k++] = tmp;
			}
		}
	}
};