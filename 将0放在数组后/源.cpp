#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

void fun(vector<int> &v, int len)
{
	//0 1 2 0 3 4
	int i = 0, pos = 0;
	for (; i < len && pos < len; i++) {
		//找到不为0的数
		while (pos < len && v[pos] == 0)
			pos++;
		//是0开始替换
		if (pos < len)
			v[i] = v[pos];
		else
			i--;

		pos++;
	}

	for (; i < len; i++) {
		v[i] = 0;
	}
}

int main()
{
	vector<int> v = { 3, 1, 2, 0, 3 , 0, 4 };
	fun(v, v.size());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}