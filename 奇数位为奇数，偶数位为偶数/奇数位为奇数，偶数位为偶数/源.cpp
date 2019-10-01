#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	/**
	 *  奇数位上都是奇数或者偶数位上都是偶数
	 *  输入：数组arr，长度大于2
	 *  len：arr的长度
	 *  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
	 */
	// 0 1 2 3
	// 1 1 2 3
	void oddInOddEvenInEven(vector<int>& arr, int len) {

		int num1 = 0;
		int num2 = 0;
		for (int i = 0; i < len; i++)
		{
			if (arr[i] % 2 == 0) //偶
				num2++;
			else
				num1++;
		}
		if (num1 <= num2)
		{
			for (int i = 0; i < len; i += 2)
			{
				if (arr[i] % 2 != 0)
				{
					for (int j = i + 1; j < len; j++)
					{
						if (arr[j] % 2 == 0)
						{
							swap(arr[i], arr[j]);
						}
					}
				}
			}
		}
		else
		{
			for (int i = 1; i < len; i += 2)
			{
				if (arr[i] % 2 == 0)
				{
					for (int j = i + 1; j < len; j++)
					{
						if (arr[j] % 2 == 0)
						{
							swap(arr[i], arr[j]);
						}
					}
				}
			}
		}
	}
};

int main()
{
	vector<int> arr;
	Solution s;
	
	for (int i = 1; i < 10; i++)
	{
		arr.push_back(i);
	}

	int len = arr.size();
	s.oddInOddEvenInEven(arr, len);

	for (auto e : arr)
	{
		cout << e << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

