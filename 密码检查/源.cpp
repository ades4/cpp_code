#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	while (n--) {
		int flag1 = 0, flag2 = 0, flag3 = 0;
		cin >> s;
		if (s[0] >= '0' && s[0] <= '9') {
			cout << "NO" << endl;
		}
		else if (s.size() < 8) {
			cout << "NO" << endl;
		}
		else {
			for (int i = 0; i < s.size(); i++) {
				if (s[i] >= '0' && s[i] <= '9') {
					flag1 = 1;
				}
				else if (s[i] >= 'a' && s[i] <= 'z') {
					flag2 = 1;
				}
				else if (s[i] >= 'A' && s[i] <= 'Z') {
					flag3 = 1;
				}
			}
			if ((flag1 && flag2) || (flag1 && flag3) || (flag2 && flag3)) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		
	}
	system("pause");
	return 0;
}