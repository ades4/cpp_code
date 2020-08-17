#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// "/et?/*","/etc/passwd"      0
// "/e*/p*/abc*t?a","/etc/passwd/abcjjkktba"       0
// "/e*/pa??wd*", "/etc/passwd"        1
// "?ba", "aab"              1

vector<string> str_helper(string &s) {
	vector<string> v;
	string tmp = "";
	for (int i = 1; i < s.length(); i++) {
		if (s[i] != '/') {
			tmp += s[i];
		}
		else {
			v.push_back(tmp);
			tmp = "";
		}
	}
	v.push_back(tmp);
	return v;
}

int str_wild_s(string &w1, string &s2)
{
	int len1 = w1.length();
	int len2 = s2.length();
	for (int i = 0, j = 0; i < len1, j < len2; ) {
		if (w1[i] != s2[j]) {
			if (w1[i] == '?') {
				i++;
				j++;
			}
			else if (w1[i] == '*') {
				//*12, 12312
				int flag = len1 - 1 - i;
				if (flag == 0) {
					return 0;
				}
				else {
					for (int k = len1 - 1, p = len2 - 1; k == i, p > 1;) {
						if (w1[k] != s2[p]) {
							if (w1[k] == '?') {
								k--;
								p--;
							}
							else if (w1[k] == '*') {
								return 0;
							}
							else {
								return 1;
							}	
						}
						else {
							k--;
							p--;
						}
					}
					return 0;
				}
			}
			else {
				return 1;
			}
		}
		else {
			i++;
			j++;
		}
	}
	return 0;
}

int str_wild_compare(string w1, string s2) {
	string tmp1, tmp2;
	vector<string> v1, v2;
	int len1 = w1.length();
	int len2 = s2.length();
	int flag = 0;
	if (w1[0] != '/') {	
		return str_wild_s(w1, s2);
	}
	else {
		v1 = str_helper(w1);
		v2 = str_helper(s2);

		if (v1.size() != v2.size()) {
			return 1;
		}
		else {
			for (int i = 0; i < v1.size(); i++) {
				tmp1 = v1[i];
				tmp2 = v2[i];
				if (str_wild_s(tmp1, tmp2) == 1) {
					flag = 1;
				}
			}
			if (flag == 0) {
				return 0;
			}
			else {
				return 1;
			}
		}
		
	}
}

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2) {
		cout << str_wild_compare(s1, s2) << endl;
	}
	system("pause");
	return 0;
}