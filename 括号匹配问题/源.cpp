#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	string s;
	stack<char> n;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (n.empty() == true) {
			if (s[i] == '(' || s[i] == '[' || s[i] == ')' || s[i] == ']') {
				n.push(s[i]);
			}
		}
		else {
			if (n.top() == '(' && s[i] == ')') {
				n.pop();
			}
			else if (n.top() == ')' && s[i] == '(') {
				n.pop();
			}
			else if (n.top() == '[' && s[i] == ']') {
				n.pop();
			}
			else if(n.top() == ']' && s[i] == '['){
					n.pop();
			}
			else {
				/*if (s[i] == '(' || s[i] == '[' || s[i] == ')' || s[i] == ']')
				{
					n.push(s[i]);
				}*/
				continue;
			}
		}
	}
	if (n.empty())
	{
		cout << "true";
	}
	else {
		cout << "false";
	}
	system("pause");
	return 0;
}