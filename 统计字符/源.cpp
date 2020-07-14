#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;
//65 - A  90 - Z
//97 - a  122 - z
int main()
{
	string s;
	while (getline(cin, s)) {
		int arr[256] = { 0 };

		for (int i = 0; i < s.length(); i++) {
			arr[s[i]]++;

			if (arr[s[i]] == 3) {
				if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
					cout << s[i] << endl;
					break;
				}
			}
		}
	}
	return 0;
}