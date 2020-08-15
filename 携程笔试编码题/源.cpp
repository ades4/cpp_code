#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
输入为3个数，每行1个数，第一个数表示a，第二个数表示b，第三个数表示k。

a和b均为正整数，0 <= k <= 100000
1
2
3

[3,4,5,6]

*/

int main()
{
	int a, b, k, tmp, flag;
	vector<int> res;
	while (cin >> a >> b >> k) {
		if (k == 0 || (a == 0 && b == 0)) {
			cout << '[' << ']' << endl;
		}
		else {
			res.push_back(a * k);
			//不能重复
			if ((a * k) != (b * k)) {
				res.push_back(b * k);
			}

			for (int i = 1; i <= k; i++) {
				tmp = a * i + b * (k - i);
				flag = 0;
				for (int j = 0; j < res.size(); j++) {
					if (res[j] == tmp)
						flag = 1;
				}
				if (flag == 0) {
					res.push_back(tmp);
				}
			}
			sort(res.begin(), res.end());
			cout << '[';
			for (int i = 0; i < res.size() - 1; i++) {
				cout << res[i] << ',';
			}
			cout << res[res.size() - 1];
			cout << ']' << endl;

		}
	}

	system("pause");
	return 0;
}

//编程题2
//HEAD`0`A,B,C|A`20`END|B`100`END|C`50`D,E|D`80`F|E`150`END|F`30`END

