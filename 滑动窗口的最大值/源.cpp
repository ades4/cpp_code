#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;


	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
	{
		vector<int> v;
		int n_size = size;
		if (size > num.size())
			return v;
		int begin = 0;
		int end = size - 1;
		while (end < num.size()) {
			int max = num[begin];
			for (int i = begin; i <= end; i++) {
				if (num[i] > max)
					max = num[i];
			}
			v.push_back(max);
			begin++;
			end++;
		}
		return v;
	
		//牛客未过，但没找到错误原因
		/*vector<int> v, v1;
		int n_size = size;
		if (size > num.size())
			return v;

		for (int i = 0; i < num.size() - size + 1; i++) {
			int j = i;
			while (n_size--) {
				v.push_back(num[j]);
				j++;
			}
			n_size = size;
			int max = v[0];
			for (int j = 0; j < v.size(); j++) {
				if (v[j] > max) {
					max = v[j];
				}
			}
			v.clear();
			v1.push_back(max);
		}
		return v1;*/
	}

	int main()
	{
		vector<int> num;
		// 2 3 4 2 6 2 5 1
		num.push_back(2);
		num.push_back(3);
		num.push_back(4);
		num.push_back(2);
		num.push_back(6);
		num.push_back(2);
		num.push_back(5);
		num.push_back(1);
		vector<int> v = maxInWindows(num, 3);
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
		}
		cout << endl;
		system("pause");
		return 0;
	}