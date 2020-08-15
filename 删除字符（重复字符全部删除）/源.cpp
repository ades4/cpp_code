#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;


int main() {
	string s;
	while (cin >> s) {
		int S_length = s.length();
		string new_S = "";
		for (int i = 0; i < S_length;) {
			int j = i + 1;
			while (s[i] == s[j]) {  //找到不相等的那个j
				j++;
			}
			if (j - i == 1) { // 不重复，把前一个值保存
				new_S += s[i];
				i++;
			}
			else
				i = j;   //把j的值赋给i，跳过重复的字符串

		}
		if (new_S == "")
			cout << "no" << endl;
		else
			cout << new_S << endl;
	}
	return 0;
}


/*
//abee12  情况解决不了问题
string s_string(string &s, int begin, int end)
{
	string tmp = "";
	for (int i = 0; i < begin; i++) {
		tmp += s[i];
	}
	for (int i = end; i < s.length(); i++) {
		tmp += s[i];
	}
	return tmp;
}

void s_com_string(string &s, int len)
{
	int begin = 0;
	int end = 0;
	string tmp = "", res = "";
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1]) {
			end = i + 1;
		}
		else {
			tmp = s_string(s, begin, end);
			begin = i;
			end++;
		}
	}
	
	if (begin + 1 != end) {
		tmp = s_string(tmp, begin, end);
	}

	s = tmp;
}

int main()
{
	string s;
	while (cin >> s) {
		if (s.length() <= 1) {
			cout << s << endl;
		}
		else {
			s_com_string(s, s.length());

			if (s.length() == 0) {
				cout << "no" << endl;
			}
			else {
				cout << s << endl;
			}
		}
	}
	return 0;
}
*/