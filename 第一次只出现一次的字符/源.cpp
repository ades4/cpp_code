#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	//将str中的字符在对应的位置出现则++，在循环一遍找到为第一次只出现1次的字符
	int FirstNotRepeatingChar(string str) {
		int arr[256] = { 0 };
		for (int i = 0; i < str.length(); i++) {
			arr[str[i]]++;
		}
		for (int i = 0; i < str.length(); i++) {
			if (arr[str[i]] == 1)
				return i;
		}
		return -1;
	}
};