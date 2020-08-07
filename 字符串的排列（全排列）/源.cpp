#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//next_permutation  全排列函数
vector<string> Permutation(string str) {
	vector<string> res;

	if (str.size() == 0)
		return res;
	do {
		res.push_back(str);
	} while (next_permutation(str.begin(), str.end()));

	sort(res.begin(), res.end());
	return res;
}
//
////回溯的思想
//void swap(string &str, int i, int j) {
//	char tmp = str[i];
//	str[i] = str[j];
//	str[j] = tmp;
//}
//
//bool IsExist(string &str, vector<string> &res) {
//	for (int i = 0; i < res.size(); i++) {
//		if (res[i] == str) {
//			return true;
//		}
//	}
//	return false;
//}
//
//void PermutationHelper(string &str, int start, vector<string> &res) {
//	if (start == str.length() - 1) {
//		if (IsExist(str, res) != true) {
//			res.push_back(str);
//		}
//		return;
//	}
//
//	for (int i = start; i < str.size(); i++) {
//		swap(str, start, i);    //确定以哪个字符作为开始
//		PermutationHelper(str, start + 1, res);
//		swap(str, start, i);    //交换回来，重新开始下一次
//	}
//}
//
//vector<string> Permutation(string str) {
//	vector<string> res;
//	if (str.length() == 0)
//		return res;
//
//	PermutationHelper(str, 0, res);
//	//按字典序进行排序返回
//	sort(res.begin(), res.end());
//	return res;
//}

int main()
{
	string s;
	cin >> s;
	vector<string> res;
	res = Permutation(s);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	system("pause");
	return 0;
}