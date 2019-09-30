#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	int tmp = 0;
	int tel = 0;
	while (cin >> num1 >> num2)
	{
		do
		{
			tmp = num1 ^ num2;
			tel = (num1 & num2) << 1;
			num1 = tmp;
			num2 = tel;
		} while (num2);

		cout << tmp << endl;
	}
	system("pause");
	return 0;
}