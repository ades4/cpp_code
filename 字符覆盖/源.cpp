#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(int a, int b);
int main()
{
	//s1 = fedcba    s2 = ee
	string s1, s2;
	cin >> s1 >> s2;
	sort(s2.begin(), s2.end(), compare);
	for (int i = 0; i < s2.length(); i++)
	{
		for (int j = 0; j < s1.length(); j++)
		{
			if (s1[j] < s2[i]) {
				s1[j] = s2[i];
				break;
			}
		}
	}
	cout << s1;
	return 0;
}
bool compare(int a, int b) {
	return a > b;
}