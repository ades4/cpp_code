#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
9
6
1 2 3 5 9 14
*/
/*
//9 6
//14 1
//未通过
void fun(int top, int k, vector<int> &m)
{
	vector<int> res;
	int index = 0, num;
	sort(m.begin(), m.end());
	int max = m[m.size() - 1];

	for (int i = 0; i < m.size(); i++) {
		if (m[i] == top) {
			index = i;
			break;
		}
	}

	for (int i = index; i < m.size(); i++) {
		res.push_back(m[i]);
		num = m[i];
		for (int i = 0; i < max; i++) {
			if (num + i > max) {
				res.push_back(i);
				break;
			}
		}

	}

	for (int i = 0; i < res.size(); i+=2) {
		for (int j = i; j < i+2; j++) {
			cout << res[j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	res.clear();
}

int main()
{
	int top, k, tmp;
	vector<int> m;
	cin >> top >> k;

	for (int i = 0; i < k; i++) {
		cin >> tmp;
		m.push_back(tmp);
	}

	fun(top, k, m);

	system("pause");
	return 0;
}*/


//1000到10000之间是质数又是回文的数
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool is_z(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

bool is_h(int num) {
	string s = to_string(num);
	int begin = 0;
	int end = s.size() - 1;

	while (begin <= end) {
		if (s[begin] == s[end]) {
			begin++;
			end--;
		}
		else {
			return false;
		}
	}
	return true;
}

vector<int> fun()
{
	vector<int> res;

	for (int i = 1000; i < 100000; i++) {
		if (is_z(i) && is_h(i)) {
			res.push_back(i);
		}
	}
	return res;
}

int main()
{
	vector<int> res;

	res = fun();

	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	system("pause");
	return 0;
}
