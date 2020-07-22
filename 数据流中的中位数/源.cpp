#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> v;
	void Insert(int num)
	{
		v.push_back(num);
	}

	double GetMedian()
	{
		sort(v.begin(), v.end());
		// 5 2  3 4  1 6
		int num = v.size();
		double z;
		if (num % 2 == 0) {
			int mid = num / 2;
			z = (v[mid - 1] + v[mid]) / 2.0;
		}
		else {
			int mid = num / 2;
			z = v[mid];
		}
		return z;
	}
};