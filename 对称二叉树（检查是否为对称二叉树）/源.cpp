#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

//https://www.nowcoder.com/practice/ff05d44dfdb04e1d83bdbdab320efbcb?tpId=13&&tqId=11211&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//请实现一个函数，用来判断一棵二叉树是不是对称的。
//注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:

	//比较对应的左右子树是否相同

	bool isSymmetrical(TreeNode* pRoot)
	{
		if (pRoot == NULL)
			return true;
		return isSymmetricalTree(pRoot->right, pRoot->left);
	}

	bool isSymmetricalTree(TreeNode* node1, TreeNode* node2) {
		if (node1 == NULL && node2 == NULL)
			return true;

		if (node1 == NULL || node2 == NULL)
			return false;

		if (node1->val != node2->val)
			return false;

		return isSymmetricalTree(node1->left, node2->right)\
			& isSymmetricalTree(node1->right, node2->left);
	}
};
