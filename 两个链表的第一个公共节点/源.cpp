#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
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
	ListNode* FindFirstCommonNodeHelper(ListNode* pHead1, ListNode* pHead2) {
		while (pHead1) {
			if (pHead1 == pHead2) {
				return pHead1;
			}
			else {
				pHead1 = pHead1->next;
				pHead2 = pHead2->next;
			}
		}
		return NULL;
	}

	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		int len1 = 0, len2 = 0;
		ListNode *cur = pHead1;
		ListNode *cur1 = pHead1, *cur2 = pHead2;
		ListNode *res;
		while (cur) {
			len1++;
			cur = cur->next;
		}

		cur = pHead2;
		while (cur) {
			len2++;
			cur = cur->next;
		}
		int len_d = 0;
		if (len1 > len2) {
			len_d = len1 - len2;
			while (len_d--) {
				cur1 = cur1->next;
			}
			res = FindFirstCommonNodeHelper(cur1, cur2);
		}
		else if (len1 < len2) {
			len_d = len2 - len1;
			while (len_d--) {
				cur2 = cur2->next;
			}
			res = FindFirstCommonNodeHelper(cur1, cur2);
		}
		else {
			res = FindFirstCommonNodeHelper(cur1, cur2);
		}
		return res;
	}
};