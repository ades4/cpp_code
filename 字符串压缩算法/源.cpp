#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s)) {   // 输入可能有空格需要用getline
		char tmp;
		int num = 0;
		for (int i = 0; i < s.length(); ) {
			if (s[i] == s[i + 1]) {
				num++;
			}
			else {
				tmp = s[i];
				if (num > 0) {
					cout << num;
				}
				cout << tmp;
				num = 0;
			}
			i++;
		}
	}
	system("pause");
	return 0;
}