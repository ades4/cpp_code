#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。
//注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。

struct TreeLinkNode {
	int val;
	struct TreeLinkNode *left;
	struct TreeLinkNode *right;
	struct TreeLinkNode *next;
	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

	}
};

class Solution {
public:
	TreeLinkNode* GetNext(TreeLinkNode* pNode)
	{
		if (pNode == NULL)
			return NULL;

		if (pNode->right == NULL)
		{
			if (pNode->next == NULL) {
				//头结点
				return NULL;
			}
			else if (pNode->left == NULL) {
				if (pNode->next->right == pNode) {
					TreeLinkNode* cur = pNode;
					while (cur->next) {
						//找到头结点
						cur = cur->next;
					}

					TreeLinkNode* next = cur;
					while (next->right) {
						next = next->right;
					}
					if (next == pNode)
						//最后一个结点
						return NULL;
					else
						return cur;
				}
				else if (pNode->next->left == pNode) {
					return pNode->next;
				}
			}
			else {
				return pNode->next;
			}
		}
		else {
			if (pNode->next == NULL) {
				//头结点
				if (pNode->right->left == NULL)
					return pNode->right;
				else
					return pNode->right->left;
			}
			else {
				return pNode->right;
			}
		}
	}
};