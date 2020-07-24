#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <stack>
using namespace std;


	int StrToInt(string str) {
		if (str.length() == 0 || str.length() == 1 && str[0] == '0')
			return 0;

		if (str[0] == '+' || str[0] == '-') {
			if (str[1] == '0') {
				return 0;
			}
		}
		int flag = 0;
		int s = 0;
		stack<int> d;
		for (int i = 0; i < str.length(); i++) {
			if (str[0] == '+'){
				flag = 1;
			}
			else if(str[0] == '-'){
				flag = 0;
			}

			if (str[0] != '+' && str[0] != '-')
				flag = 1;

			if (str[i] >= 'a' && str[i] <= 'z' \
				|| str[i] >= 'A' && str[i] <= 'Z') {
				flag = 0;
				return 0;
			}
			else if(str[i] >= '0' && str[i] <= '9') {
				int tmp = str[i] - '0';
				d.push(tmp);
			}
		}

		int num = 1;
		while (!d.empty()) {
			int tmp = d.top();
			if (flag == 0) {
				s += tmp * num * -1;
			}
			else {
				s += tmp *num;
			}
			num = num * 10;
			d.pop();
		}
		return s;
	}

int main()
{
	string s;
	while (cin >> s) {
		cout << StrToInt(s) << endl;
	}
	system("pause");
	return 0;
}