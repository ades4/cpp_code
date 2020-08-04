#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

bool Find(int target, vector<vector<int> > array) {
	// 1 2 3 4
	// 2 3 4 5
	// 3 4 5 6
	// 4 5 6 7      //4
	int i = 0;
	int j = array[0].size() - 1;

	while (i < array.size() && j >= 0) {
		if (array[i][j] > target) {
			//array[i][j]一定是当前行（竖着）最大的，当前列最小的
			//排除当前列
			j--;
		}
		else if (array[i][j] < target) {
			//排除当前行
			i++;
		}
		else {
			return true;
		}
	}
	return false;
}

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