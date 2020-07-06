#define _CRT_SECURE_NO_WARNINGS 1 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	if (s[0] == '-') {
		reverse(s.begin(), s.end());
		string m = s.substr(0, s.length() - 1);
		cout << "-" << m;
	}
	else {
		reverse(s.begin(), s.end());
		cout << s;
	}
	return 0;
}