#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	vector<int> s1, s2, s;
	int temp;
	while (cin >> temp) {
		s1.push_back(temp);
		if (cin.get() == '\n') {
			break;
		}
	}
	while (cin >> temp) {
		s2.push_back(temp);
		if (cin.get() == '\n') {
			break;
		}
	}
	int i, j;
	for (i = 0,j = 0; i < s1.size() && j < s2.size(); )
	{
		if (s1[i] < s2[j]) {
			s.push_back(s1[i]);
			i++;
		}
		else {
			s.push_back(s2[j]);
			j++;
		}
	}
	if (i < s1.size() ) {
		for (i; i < s1.size(); i++){
			s.push_back(s1[i]);
		}
	}
	if (j < s2.size()) {
		for (j; j < s2.size(); j++) {
			s.push_back(s2[j]);
		}
	}

	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}