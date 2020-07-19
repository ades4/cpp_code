#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>

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
	//中序遍历将结点全部放在vector里
	//中序遍历是从小到大
	//输出第k个
	void TreePrevOrder(TreeNode* pRoot, vector<TreeNode*> &v) {
		if (pRoot == NULL)
			return;
		TreePrevOrder(pRoot->left, v);
		v.push_back(pRoot);
		TreePrevOrder(pRoot->right, v);
	}

	TreeNode* KthNode(TreeNode* pRoot, int k)
	{
		if (pRoot == NULL || k <= 0)
			return NULL;
		vector<TreeNode*> v;
		TreePrevOrder(pRoot, v);
		//需要判断k小于结点总数
		if (k > v.size())
			return NULL;
		return v[k - 1];
	}
};