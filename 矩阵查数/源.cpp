#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, c, x, key;
	cin >> n >> c;
	vector<vector<int>> v;
	for (int i = 0; i < n; i++)
	{
		vector<int> temp;
		for (int j = 0; j < c; j++)
		{
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	cin >> key;

	int i = n - 1, j = 0;
	while (i > -1 && j < c)
	{
		if (v[i][j] > key) {
			i--;
		}
		else if (v[i][j] < key) {
			j++;
		}
		else {
			cout << "true";
			return 0;
		}
	}
	cout << "false";

	return 0;
}