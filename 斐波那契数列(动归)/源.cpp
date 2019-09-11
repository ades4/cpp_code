#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;
int num = 0;
//class Solution {
//public:
//	int Fibonacci(int n) {
//		vector<int> F(n + 1, 0);  //初始化为0  1.状态的定义
//		num++;
//		F[1] = 1;   //2.状态的初始化
//
//		for (int i = 2; i <= n; i++)
//		{
//			F[i] = F[i - 1] + F[i - 2];   //3.状态转移方程   
//		}
//		return F[n];  //4.返回值
//	}
//};

//优化：把空间复杂度变成O(1)


class Solution {
public:
	int Fibonacci(int n) {
		num++;
		if (n <= 0)
			return 0;
		if (n == 1 || n == 2)
			return 1;
		
		int fn, fn1, fn2;  
		fn1 = fn2 = 1; 

		for (int i = 3; i <= n; i++)
		{
			fn = fn1 + fn2;   //状态转移方程
			fn2 = fn1;
			fn1 = fn;
		}
		return fn;  //返回值
	}
};

//int num = 0;
//class Solution {
//public:
//	int Fibonacci(int n) {
//		num++;
//		if (n <= 0)
//			return 0;
//		if (n == 1 || n == 2)
//			return 1;
//		else
//			return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//};

int main()
{
	int n;
	Solution s;
	while (cin >> n)
	{
		cout << "最终结果是: " << s.Fibonacci(n) << " ";
		cout << "函数被调用次数: " << num << endl;
		num = 0;
	}
	system("pause");
	return 0;
}

