#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand((int)time(0));
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(rand());
	}

	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = 0; j < v.size() - i - 1; j++) {
			int tmp = 0;
			if (v[j] > v[j + 1]) {
				tmp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	system("pause");
	return 0;
}