#define _CRT_SECURE_NO_WARNINGS 1 

//如果名字仅由大小写英文字母组成且长度不超过10，
//则我们认为这个名字是真实有效的，否则就判定为恶意填写问卷。
/*
5
BA
aOWVXARgUbJDG
OPPCSKNS
HFDJEEDA
ABBABBBBAABBBAABAAA
*/

/*

#include <iostream>
#include <string>
using namespace std;

int fun(string &name)
{
	int res = 0;
	if (name.length() <= 0 || name.length() > 10) {
		return res;
	}
	else {
		int flag = 0;
		for (int i = 0; i < name.length();) {
			if (name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z')
			{
				i++;
			}
			else {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			res = 1;
		}
	}
	return res;
}

int main()
{
	int n, res = 0;
	string name;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++) {
			cin >> name;
			res += fun(name);
		}
		cout << res << endl;
	}
	system("pause");
	return 0;
}
*/

//给定一个1到N的排列P1到PN（N为偶数），初始时Pi = i（1≤i≤N），
//现在要对排列进行M次操作，每次操作为以下两种中一种：
//①将排列的第1个数移到末尾；
//②交换排列的第1个数与第2个数、第3个数与第4个数、...、第N - 1个数与第N个数。
//求经过这M次操作后得到的排列。

/*
第一行包含两个整数N和M，2≤N，M≤105。

第二行包含M个空格隔开的整数t1到tM，1≤ti≤2。若ti=1，
则表示第i次操作为操作①；若ti=2，则表示第i次操作为操作②。
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fun1(vector<int> &v)
{
	vector<int> res;
	int tmp = v[0];
	for (int i = 1; i < v.size(); i++) {
		res.push_back(v[i]);
	}
	res.push_back(tmp);
	v = res;
}

void fun2(vector<int> &v)
{
	if (v.size() % 2 == 0) {
		for (int i = 0; i < v.size(); ) {
			swap(v[i], v[i + 1]);
			i += 2;
		}
	}
	else {
		for (int i = 0; i < v.size() - 1; ) {
			swap(v[i], v[i + 1]);
			i += 2;
		}
	}
}

int main()
{
	int N, tmp;
	long M;
	vector<int> v , od;
	while (cin >> N >> M)
	{
		for (int i = 1; i <= N; i++) {
			v.push_back(i);
		}

		for (int i = 0; i < M; i++) {
			cin >> tmp;
			od.push_back(tmp);
		}

		for (int i = 0; i < M; i++) {
			if (od[i] == 1) {
				fun1(v);
			}
			else if (od[i] == 2) {
				fun2(v);
			}
			else
				break;
		}

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
		}
		cout << endl;
		v.clear();
	}

	system("pause");
	return 0;
}