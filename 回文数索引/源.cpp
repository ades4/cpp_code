#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;

bool huiwenfun(string &s) {
	int begin = 0;
	int end = s.size() - 1;
	while(begin < end)
	{
		if (s[begin] != s[end]) {
			return false;
		}
		begin++;
		end--;
	}
	return true;
}


int main()
{
	int n, tmp = 0;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		if (huiwenfun(s)) {
			cout << "-1" << endl;
		}
		else {
			for (int i = 0; i < s.size(); i++) {
				string s1 = s;
				s1.erase(s1.begin() + i);
				if (huiwenfun(s1)) {
					cout << i << endl;
					break;
				}
			}
		}
	}
	system("pause");
	return 0;
}