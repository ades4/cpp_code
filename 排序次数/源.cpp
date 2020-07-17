#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v, v1;
	int N, tmp, num = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	v1 = v;
	sort(v.begin(), v.end());
	int i = 0, j = 0, index = 0;
	//2 3 4 5 7 8 9     i 
	//2 5 3 4 8 9 7     j  遇到不相等的数j++，继续匹配i

	while (j < v.size()) {
		if (v[i] == v1[j]) {
			i++;    
			j++;
			index++;
		}
		else
			j++;
	}
	cout << v.size() - index << endl;

	system("pause");
	return 0;
}