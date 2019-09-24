#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

int main()
{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
////	printf("%p\n", arr);
////	printf("%p\n", &arr[0]);
//
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	printf("&arr[%d] = %p  <==> p + %d = %p\n", i, &arr[i], i, p + i);
//	//}
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//

	int arr[4] = { 0 };
	printf("arr = %p\n", arr);
	printf("&arr= %p\n", &arr);
	printf("arr+1 = %p\n", arr + 1);
	printf("&arr+1= %p\n", &arr + 1);
	
	system("pause");
	return 0;
}