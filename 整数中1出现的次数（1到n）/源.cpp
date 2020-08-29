#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

int NumberOf1Between1AndN_Solution(int n)
{
	string s;
	for (int i = 1; i < n + 1; i++) {
		s += i;
	}
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 1)
			count++;
	}
	return count;
}

int main()
{
	int n;
	cin >> n;
	cout << NumberOf1Between1AndN_Solution(n) << endl;
	system("pause");
	return 0;
}