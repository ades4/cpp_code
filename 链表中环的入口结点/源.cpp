#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

class Solution {
public:
	//快慢指针也可以实现   --- 相遇
	//使用快慢指针，慢指针每次向前一步，快指针每次两步  两指针相遇则有环

	ListNode* EntryNodeOfLoop(ListNode* pHead)
	{
		vector<ListNode*> v;
		if (pHead == NULL && pHead->next == NULL) {
			return NULL;
		}
		else {
			ListNode* cur = pHead;
			while (cur) {
				//存在环的话没办法全部存进vector里
				//第一次的时候vector里面没数据需要处理
				if (v.size() != 0) {
					for (int i = 0; i < v.size(); i++) {
						if (cur == v[i]) {
							return cur;
						}
					}
				}
				v.push_back(cur);
				cur = cur->next;
			}
		}
		return NULL;
	}
};