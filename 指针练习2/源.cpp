#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <cstdio>
using namespace std;

int my_strlen(char *s)
{
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}

int main()
{
	//int n = 10;
	//char *pc = (char*)&n;      //强制类型转换并不会改变n的类型  
	//int *pi = &n;
	//printf("%p\n", &n);
	//printf("%p\n", pc);
	//printf("%p\n", pc + 1);   //+1
	//printf("%p\n", pi);
	//printf("%p\n", pi + 1);   //地址+4
	

	//int n = 0x11223344;
	//char *pc = (char *)&n;
	//char *pi = (char *)&n;
	//*pc = 0x55; 
	//*pi = 0; 

	//#define N_VALUES 5
	//float values[N_VALUES];
	//float *vp;
	////指针+-整数;指针的关系运算
	//for (vp = &values[0]; vp < &values[N_VALUES];) {
	//	*vp++ = 0;
	//}
	
	
	system("pause");
	return  0;
}