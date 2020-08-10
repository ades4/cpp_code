#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

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
	//求深度
	int TreeDepth(TreeNode* pRoot) {
		if (pRoot == NULL)
			return NULL;

		int left = TreeDepth(pRoot->left);
		int right = TreeDepth(pRoot->right);

		return left > right ? left + 1 : right + 1;
	}

	bool IsBalanced_Solution(TreeNode* pRoot) {
		//平衡二叉树 - 任何子树的高度差小于等于1
		if (pRoot == NULL)
			return true;
		int leftTree = TreeDepth(pRoot->left);
		int rightTree = TreeDepth(pRoot->right);

		if (abs(leftTree - rightTree) > 1)
			return false;

		return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
	}

};