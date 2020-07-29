#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long i = 0, prv = 1, cur = 1, sum = 1;
	if (n <= 1) {
		cout << 0 << endl;
	}
	else {
		while (sum < n) {
			//1 1 2 3 5 8
			cur = prv + cur;
			prv = cur - prv;
			sum = prv + sum;
		}
		cout << sum - prv << endl;
	}
	system("pause");
	return 0;
}