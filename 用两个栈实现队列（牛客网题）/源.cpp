#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

class Solution
{
public:
	//栈是先进后出  队列先进先出 
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		int tmp;
		//需要判断stack2是否为空，要是空的话直接把stack1，push进去，否则则直接出栈
		if (stack2.size() > 0)
		{
			tmp = stack2.top();
			stack2.pop();
		}
		else {
			//需要将stack1的数据全部放入到stack2里，不然当再次往stack1里面push数据就会产生错误
			while (!stack1.empty())
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
			tmp = stack2.top();
			stack2.pop();
		}

		return tmp;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};