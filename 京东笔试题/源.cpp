#define _CRT_SECURE_NO_WARNINGS 1 

/*
//题目描述：
//求以下数列的和：

//f(n) = 1 / 5 - 1 / 10  + 1 / 15 - 1 / 20  + 1 / 25 -
//      ...... + 1 / (5 * (2 * n - 1)) - 1 / (5 * 2 * n)

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
/*
int main()
{
	float n;
	float num = 0.0, num1, num2;
	while (cin >> n) {
		// 1/(2n-1) * 1/5 - 1/n * 1/10
		// 1 / (2n-1)*5  - 1 / (n*10)
		while (n)
		{
			num1 = 1 / ((2 * n - 1) * 5); 
			num2 = 1 / (n * 10);

			num += num1 - num2;
			n--;
		}

		printf("%.4f\n", num);
	}
	system("pause");
	return 0;
}
*/


//第一行两个正整数N和M，N为X星人的移动速度，M为同伴的数量。
//第二行两个小数X和Y，表示X星人的坐标。接下来M行
//每一行包含两个小数，表示每一个同伴的坐标。
//地图中的距离单位为：千米。(N, M都为正整数)
//- 1000 <= X, Y <= 1000, 0 < M, N <= 500
/*
int main()
{
	double N, M;
	cin >> N >> M;
	double x, y;
	cin >> x >> y;
	vector<vector<double> > v(M, vector<double>(3));
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> v[i][j];
			if (j == 1) {
				v[i][2] = sqrt((v[1][0] - x)*(v[i][0] - x)
					+ (v[i][1] - y)*(v[i][1] - y));
			}
		}
	}
	double min = v[0][2];
	for (int i = 1; i < M; i++) {
		if (v[i][2] < min) {
			min = v[i][2];
		}
	}

	cout << min / N << endl;
	system("pause");
	return 0;

}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void q_sort(vector<int> &v, int begin, int end)
{
	int value = v[0];
	int num = 0;
	for (int i = v.size(); i >= 0; i--) {
		while (v[i] < value) {
			sort(v[i], value);
		}
		num = i;
	}
	q_sort(v, 0, num - 1);
	q_sort(v, num, v.size() - 1);
}
int main() {
	//int a;
	//cin >> a;

	vector<int> v;
	v.push_back(4);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(5);
	v.push_back(6);

	int begin = 0;

	q_sort(v, 0, v.size());

	return 0;
}*/

//面试字节题---局部反转字符串
/*
#include <iostream>
#include <algorithm>
using namespace std;

void fun(char* s, int begin, int end)
{
	while (begin <= end) {
		swap(s[begin], s[end]);
		begin++;
		end--;
	}
}

int main()
{
	char s[15] = "i am a student";
	for (int i = 0; i < 15; i++) {
		cin >> s[i];
	}
	int len = sizeof(s);
	int begin = 0, end = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ') {
			end = i - 1;
			fun(s, begin, end);
			begin = i + 1;
		}
	}
	fun(s, begin, len-1);
	for (int i = 0; i < len; i++) {
		cout << s[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
*/