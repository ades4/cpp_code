#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
int main()
{
	//相同为0 不同为1  -- 异或
	int a, b, c, count = 0;    //8 - 4 2 0  
	cin >> a >> b;
	while (a || b)
	{
		if (a % 2 != b % 2)
		{
			count++;
		}
		a /= 2;
		b /= 2;
	}
	
	/*c = a ^ b;
	for (int i = 0; i < 32; i++)
	{
		count += c & 1;
		c = c >> 1;
	}*/
	cout << count <<endl;
	system("pause");
	return 0;
}