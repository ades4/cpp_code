#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct comp
{
	bool operator()(const int &a, const int &b) {
		return a < b; //我们需要最大堆，所以我们采用降序排序
	}
};


vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
	/*      vector<int> res;
	if(input.size() == 0 || k > input.size())
	return res;

	sort(input.begin(), input.end());

	for(int i = 0; i < k; i++){
	res.push_back(input[i]);
	}
	return res;
	}
	*/
	vector<int> res;
	if (input.size() == 0 || k <= 0 || k > input.size()) {
		return res;
	}

	priority_queue<int, vector<int>, comp> q;

	for (int i = 0; i < input.size(); i++) {
		if (i < k) {
			//先放k个进入优先级对列
			q.push(input[i]);
		}
		else {
			//每次与队顶的数据进行比较
			//比队列中最大的数要小，就放进去
			if (q.top() > input[i]) {
				q.pop();
				q.push(input[i]);
			}
		}
	}

	for (int i = 0; i < k; i++) {
		res.push_back(q.top());
		q.pop();
	}

	return res;
}

int main()
{
	vector<int> v = { 4,5,1,6,2,7,3,8 };
	int k = 4;
	vector<int> res;
	res = GetLeastNumbers_Solution(v, k);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}