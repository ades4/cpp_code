#define _CRT_SECURE_NO_WARNINGS 1 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, tmp, count = 0;
	cin >> n;
	if (n < 4)
		cout << -1 << endl;
	else {
		vector<int> v, v1;
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			v.push_back(tmp);
		}

		sort(v.begin(), v.end());
		int end = v.size() - 1;

		//平行四边形满足两条边相等，可以把只有一条边的情况排除
		for (int i = end; i >= 1; ) {
			if (v[i] == v[i - 1])
			{
				v1.push_back(v[i]);
				i = i - 2;
			}
			else
				i--;
		}
		cout << v1[0] * v1[1] << endl;
	}

	system("pause");
	return 0;
}