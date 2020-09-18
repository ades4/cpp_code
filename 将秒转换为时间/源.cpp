#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

struct Date
{
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
};


int main()
{
	int h, m, s;
	int t;
	cin >> t;

	h = t / 3600;
	m = (t - h * 3600) / 60;
	s = t - h * 3600 - m * 60;

	cout << h << " : " << m << " : " << s << endl;
	system("pause");
	return 0;
}