#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	/*string mid;
	while (cin >> mid)
	{
		cout << mid[0];
	}
	return 0;*/

	string s, s1;
	while (getline(cin, s))
	{
		s1.push_back(s[0]);
		for (int i = 1; i < s.length(); )
		{
			if (s[i] == ' ') {
				s1.push_back(s[i + 1]);
			}
			i++;
		}
	}
	
	return 0;
}