#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, s1;
	cin >> s;
	if (s[8] == 'A') {
		if (s[0] == '1' && s[1] == '2') {
			s1 = "00:00:00";
		}
		else {
			s1 = s.substr(0, 8);
		}
	}
	else {
		if (s[0] == '1')
		{
			if (s[1] == '2') {
				s1 = "12:00:00";
			}
			else {
				s1 = "23" + s.substr(2, 6);
			}
		}
		else {
			if (s[1] == '1') {
				s1 = "13" + s.substr(2, 6);
			}
			else if (s[1] == '2') {
				s1 = "14" + s.substr(2, 6);
			}
			else if (s[1] == '3') {
				s1 = "15" + s.substr(2, 6);
			}
			else if (s[1] == '4') {
				s1 = "16" + s.substr(2, 6);
			}
			else if (s[1] == '5') {
				s1 = "17" + s.substr(2, 6);
			}
			else if (s[1] == '6') {
				s1 = "18" + s.substr(2, 6);
			}
			else if (s[1] == '7') {
				s1 = "19" + s.substr(2, 6);
			}
			else if (s[1] == '8') {
				s1 = "20" + s.substr(2, 6);
			}
			else {
				s1 = "21" + s.substr(2, 6);
			}
		}
	}
	cout << s1 << endl;
	system("pause");
	return 0;
}