#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <algorithm>
using namespace std;

/*
int fun(int* arr, int begin, int end)
{
	int tmp = arr[begin];
	while (begin < end)
	{
		//找比key小的数
		while (begin < end && arr[end] >= tmp)
		{
			end--;
		}
		arr[begin] = arr[end];
		//找比key大的数
		while (begin < end && arr[begin] <= tmp)
		{
			begin++;
		}
		arr[end] = arr[begin];
	}
	arr[begin] = tmp;
	return begin;
	
}
*/
int fun(int *arr, int begin, int end) {
	int tmp = arr[begin];

	while (begin < end) {
		//找到比k小的
		while (begin < end && arr[end] >= tmp) {
			end--;
		}
		arr[begin] = arr[end];

		while (begin < end && arr[begin] <= tmp) {
			begin++;
		}
		arr[end] = arr[begin];
	}
	arr[begin] = tmp;
	return begin;
}
int main()
{
	int arr[10] = { 4,4,2,4,5,7,5,3,4,7 };
	int begin = 0;
	int end = 9;
	int tmp = fun(arr, begin, end);

	fun(arr, 0, tmp - 1);
	fun(arr, tmp + 1, end);
	return 0;
}