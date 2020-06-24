#define _CRT_SECURE_NO_WARNINGS 1 


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		struct ListNode *next = NULL;
		struct ListNode *prv = NULL;
		while (pHead)
		{
			next = pHead->next;
			pHead->next = prv;
			prv = pHead;
			pHead = next;
		}
		return prv;
	}
};