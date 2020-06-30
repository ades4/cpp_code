#define _CRT_SECURE_NO_WARNINGS 1 


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int temp, k;
	while (cin >> temp && temp != '\n') {
		v.push_back(temp);
	}
	k = v[v.size() - 1];
	v.pop_back();
	sort(v.begin(), v.end());

	for (int i = 0; i < k; i++)
	{
		if (i < k - 1) {
			cout << v[i] << " ";
		}
		else {
			cout << v[i] << endl;
		}
	}
	return 0;
}