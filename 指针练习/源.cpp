#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>

int main()
{
//	int a = 10;//在内存中开辟一块空间
//	int *p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符

	int n = 10;     //00000000 00000000 00000000 00001010   小端存储
	//0a 00 00 00
	char *pc = (char*)&n;    //
	int *pi = &n;  
	printf("%p\n", &n);     
	printf("%p\n", pc);     //与&n相同
	printf("%p\n", pc + 1);	  	//地址加1   
	printf("%p\n", pi);     //与&n相同
	printf("%p\n", pi + 1);    //地址加4

	system("pause");
	return 0;
}