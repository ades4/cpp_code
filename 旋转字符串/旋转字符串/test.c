#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
void left_rotate1(char *stc, int k)
{
	//左旋K次
	while (k--)
	{   
		//左旋1次
		//保存第一个位置内容
		char tmp = *stc;
		char *cur = stc;
		while (*(cur + 1) != '\0')
		{
			//向前移动一位
			*cur = *(cur + 1);
			cur++;
		}
		//把第一个位置的内容放在末尾
		*cur = tmp;
	}
}

//字符串逆转

void reverse(char *str, char *end)
{
	while (str < end)
	{
		char temp = *str;
		*str = *end;
		*end = temp;
		str++;
		end--;
	}
}

//三次逆转法
void left_rotate2(char *str, int k)
{
	k = k % strlen(str);
	//逆转前K
	reverse(str, str + k - 1);
	//逆转剩余
	reverse(str + k, str + strlen(str) - 1);
	//整体逆转
	reverse(str, str + strlen(str) - 1);
}
void right_rotate1(char *str, int k)
{
	k = k % strlen(str);
	//整体逆转
	reverse(str, str + strlen(str) - 1);
	//逆转前K
	reverse(str, str + k - 1);
	//逆转剩余
	reverse(str + k, str + strlen(str) - 1);
}
void right_rotate2(char *str, int k)
{
	left_rotate1(str, strlen(str) - k);
}
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	int k = 0;
	scanf("%d", &k);
	left_rotate1(arr,k);
	printf("左旋%d次", k);
	printf("%s\n", arr);
	left_rotate2(arr, k);
	printf("左旋%d次", k);
	printf("%s\n", arr);
	right_rotate1(arr, k);
	printf("右旋%d次", k);
	printf("%s\n", arr);
	right_rotate2(arr, k);
	printf("右旋%d次", k);
	printf("%s\n", arr);
	system("pause");
	return 0;
}