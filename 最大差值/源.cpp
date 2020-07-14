#define _CRT_SECURE_NO_WARNINGS 1 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<int> v, tmp;
	while (N--) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size() - 1; i++) {
		int val = v[i + 1] - v[i];
		tmp.push_back(val);
	}

	sort(tmp.begin(), tmp.end());
	cout << tmp[tmp.size() - 1] << endl;
	return 0;
}

