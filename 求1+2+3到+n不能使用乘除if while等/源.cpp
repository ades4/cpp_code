#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>

using namespace std;
//法1
//本质为递归思想，时间复杂度高
//&&  如果前面为假，后面不操作
int Sum_Solution(int n) 
{
	(n > 0) && (n += Sum_Solution(n - 1));
	return n;
}

//法2
class Solution
{
public:
	class Sum
	{
	public:
		Sum()
		{
			ret += i;
			i++;
		}
	};
	int Sum_Solution(int n)
	{
		//多组测试用例，static为静态的，所以需要在每次使用前先初始化
		i = 1;
		ret = 0;
		//Sum arr[n];
		//多次调用构造函数进行计算
		Sum *p = new Sum[n];
		delete[] p;
		return ret;
	}
private:
	static int i;
	static int ret;
};

int Solution::i = 1;
int Solution::ret = 0;


int main()
{
	system("pause");
	return 0;
}
