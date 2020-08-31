#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

//请实现有重复数字的有序数组的二分查找。
//输出在数组中第一个大于等于查找值的位置，
//如果数组中不存在这样的数，则输出数组长度加一。

int upper_bound_(int n, int v, vector<int>& a) {
	int begin = 0, end = n - 1, mid = 0;
	int flag = 0;
	if (n == 0)
		return 1;
	else {
		while (begin < end)
		{
			mid = (begin + end) / 2;
			//找到当前值为大于等于v，且前一个值一定小于v的数
			if (a[mid] >= v) {
				if (mid == 0 || a[mid - 1] < v)
					return mid + 1;
				else
					end = mid - 1;
			}
			else {
				begin = mid + 1;
			}
		}
		return n + 1;
	}
}
int main()
{
	vector<int> a = { 1,1,2,3,7,7,7,9,9,10 };
	int n = 10;
	int v = 2;
	int num = upper_bound_(n, v, a);
	cout << num << endl;

	system("pause");
	return 0;
}