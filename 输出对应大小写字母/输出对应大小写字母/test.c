#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
int main()
{

	char arr;
	while (scanf("%c", &arr) != EOF)
	{
		if ('a' <= arr && arr <= 'z')
		{
			printf("%c\n", arr - 32);
		}
		else if ('A' <= arr && arr <= 'Z')
		{
			printf("%c\n", arr + 32);
		}
		else
			break;
	}
	system("pause");
	return 0;
}