#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
};

class Solution {
public:
	/**
	 *
	 * @param l1 ListNode类
	 * @param l2 ListNode类
	 * @return ListNode类
	 */
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		// write code here
		if (l1 == NULL) return l2;
		if (l2 == NULL) return l1;
		//带头节点的
		ListNode* l3 = new ListNode(0);
		ListNode* p3 = l3;

		while (l1 != NULL && l2 != NULL) {
			if (l1->val < l2->val) {
				p3->next = l1;
				l1 = l1->next;
			}
			else {
				p3->next = l2;
				l2 = l2->next;
			}
			p3 = p3->next;
		}

		if (l1 != NULL) {
			p3->next = l1;
		}
		if (l2 != NULL) {
			p3->next = l2;
		}
		return l3->next;
	}
};

