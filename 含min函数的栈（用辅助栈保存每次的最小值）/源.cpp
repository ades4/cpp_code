#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <stack>
using namespace std;

class Solution {
private:
	stack<int> s;
	stack<int> min_s; //¸¨ÖúÕ»
	//ÀûÓÃ¸¨ÖúÕ»´æ´¢×îÐ¡Öµ
public:
	void push(int value) {
		s.push(value);

		if (min_s.size() == 0 || min_s.top() > value) {
			min_s.push(value);
		}
		else { //min_s.size() != 0 && min_s.top() < value
			min_s.push(min_s.top());
		}
	}
	void pop() {
		if (s.size() == 0 || min_s.size() == 0)
			return;

		s.pop();
		min_s.pop();
	}
	int top() {
		return s.top();
	}
	int min() {
		return min_s.top();
	}
};