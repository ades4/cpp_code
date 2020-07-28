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
	/*
		//三个指针
		ListNode* ReverseList(ListNode* pHead) {
			if(pHead == NULL || pHead->next == NULL)
				return pHead;

			ListNode* prev = pHead;
			ListNode* cur = pHead->next;
			ListNode* next = cur->next;

			while(next != NULL){
				//翻转
				cur->next = prev;
				prev = cur;
				cur = next;
				next = next->next;
			}
			cur->next = prev; //当传入的链表只有两个节点 or 上述翻转结束时，最后一个节点并未翻转
			pHead->next = NULL;
			pHead = cur;  //头指针指向最后一个节点
			return pHead;
		}
	*/
	//头插法
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL)
			return pHead;

		ListNode* newhead = NULL;
		while (pHead != NULL) {
			//保存下一个结点
			ListNode* p = pHead;
			pHead = pHead->next;

			//头插新结点
			p->next = newhead;
			newhead = p;
		}
		return newhead;
	}
};



