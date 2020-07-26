#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> multiply(const vector<int>& A) {
		//a 1 2 3 4 5
		//b[0] = 2*3*4*5; b[1] = 1*3*4*5;      
		vector<int> B;
		int tmp = 1;
		for (int i = 0; i < A.size(); i++) {
			for (int j = 0; j < A.size(); j++) {
				if (i == j) {
					tmp = tmp * 1;
				}
				else {
					tmp = tmp * A[j];
				}
			}
			B.push_back(tmp);
			tmp = 1;
		}
		return B;
	}
};