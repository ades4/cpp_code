#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//题目描述
//请实现一个函数，将一个字符串中的每个空格替换成“ % 20”。
//例如，当字符串为We Are Happy.则经过替换之后的字符串为We % 20Are % 20Happy。

/*
void replaceSpace(char *str, int length) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (str[i] == ' ')
			count++;
	}

	char *old_end = str + length;
	char *new_end = str + length + count * 2;
	while (old_end >= str && new_end >= str) {
		if (!isspace(*old_end)) {
			*new_end = *old_end;
			new_end--;
			old_end--;
		}
		else {
			*new_end-- = '0';
			*new_end-- = '2';
			*new_end-- = '%';

			old_end--;
		}
	}
}
*/

void replaceSpace(string str, int length) {
	string tmp;
	for (int i = 0; i < length; i++) {
		if (str[i] != ' ')
			tmp += str[i];
		else {
			tmp += "%20";
		}
	}

	for (int i = 0; i < tmp.size(); i++) {
		str[i] = tmp[i];
	}
}

int main()
{
	//char* str = new char[1];
	string str;
	getline(cin, str);
	replaceSpace(str, str.size());

	system("pause");
	return 0;
}