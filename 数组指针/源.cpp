#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

void print_arr1(int arr[3][5], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//需要接受二维数组的地址，用一个数组指针
//把二维数组想象成一维数组
//arr相当于一维数组的首元素（每一行有三个元素）
void print_arr2(int(*arr)[5], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//arr+0 --->第一行   arr+1 --->第二行 ...   
		//arr+i 第i行的地址  *(arr+i) 第i行的元素 
 		for (int j = 0; j < col; j++)
		{
			//*(arr+i)+j  第i行下标为j的地址    *(*(arr+i)+j)  访问第i行下标为j的元素
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}