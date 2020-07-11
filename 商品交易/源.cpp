#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

int main()
{
	int n, min = 0, c = 0;
	cin >> n;
	//数目较大需要用long
	long arr[n], max;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			max += arr[i] - arr[i - 1];
			if (c == 0) {
				min++;
			}
			c = 1;
		}
		if (arr[i] < arr[i - 1]) {
			min += c;
			c = 0;
		}
	}
	min += c;
	cout << max << ' ' << min;
	return 0;
}
