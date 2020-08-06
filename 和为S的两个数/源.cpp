#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

vector<int> FindNumbersWithSum(vector<int> array, int sum) {
/*	vector<int> res;
	if (array.size() < 2 || sum < array[0] + array[1])
		return res;
	//a+b=sum,a和b越远乘积越小，
		//一头一尾两个指针往内靠近的方法找到的就是乘积最小的情况
	int left = 0;
	int right = array.size() - 1;
	while (left < right) {
		int rest = array[left] + array[right];
		if (rest == sum) {
			res.push_back(array[left]);
			res.push_back(array[right]);
			return res;
		}
		else if (rest < sum) {
			left++;
		}
		else {
			right--;
		}
	}
	return res;*/

	//双重循环
	vector<int> res;
	if (array.size() < 2 || sum < array[0] + array[1])
		return res;

	bool flag = false;
	for (int i = 0; i < array.size() - 1; i++) {
		if (flag == true)
			break;
		for (int j = i + 1; j < array.size(); j++) {
			if (array[i] + array[j] == sum) {
				res.push_back(array[i]);
				res.push_back(array[j]);
				flag = true;
				break;
			}
		}
	}
	return res;
}


int main()
{
	vector<int> array, res;
	array.push_back(1);
	array.push_back(2);
	array.push_back(3);
	array.push_back(4);
	array.push_back(5);
	array.push_back(5);
	array.push_back(6);
	array.push_back(7);
	array.push_back(8);
	int sum;
	cin >> sum;
	res = FindNumbersWithSum(array, sum);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i];
	}
	cout << endl;
	system("pause");
	return 0;
}