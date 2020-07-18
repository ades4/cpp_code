#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

/*
思路：
- 题目本质是将x移动到y的后面需要多少次

- 从后往前统计y的数量
- 假设第一次检测到x时，有2个y在后面，x移动需要两次
- 该x移动后y的个数会成倍增长变成2y，所以要将当前y的个数更新为2*y
- 依次统计最后得到需要移动的次数，即y的总数
*/
const long long mod = pow(10, 9) + 7;
int main()
{
	string s;
	cin >> s;
	long long cur = 0, sum = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == 'y') {
			cur++;
		}
		if (s[i] == 'x') {
			sum = (sum + cur) % mod;
			cur = (2 * cur) % mod;
		}
	}
	cout << sum << endl;
	return 0;
}


