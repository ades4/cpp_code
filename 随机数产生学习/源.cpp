#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <time.h> 
using namespace std;

int main()
{
	int n = rand()%100;
	cout << n << endl;
	system("pause");
	return 0;
}


//int main()
//{
//	//srand(time(NULL));
//	srand((int)time(0));
//	for(int i = 0; i < 20; i++)
//		cout << rand() << endl;
//	system("pause");
//	return 0;
//}