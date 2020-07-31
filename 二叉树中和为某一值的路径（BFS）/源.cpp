#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

//输入一颗二叉树的根节点和一个整数，按字典序打印出二叉树中结点值的和为输入整数的所有路径。
//路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。


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
	void FindPathDFS(TreeNode* root, int expectNumber, vector<vector<int> > &res, vector<int> &list) {
		if (root == NULL)
			return;

		list.push_back(root->val);
		expectNumber -= root->val;

		//已经是叶子结点，且此条路径满足条件
		if (root->left == NULL && root->right == NULL && expectNumber == 0)
			res.push_back(list);
		//dfs的过程
		FindPathDFS(root->left, expectNumber, res, list);
		FindPathDFS(root->right, expectNumber, res, list);

		//左右子树都遍历完了，且不满足条件，就出把当前结点从临时存储删掉
		//回退上一层的过程
		list.pop_back();
	}

	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		vector<vector<int> > res;  //结果集
		if (root == NULL)
			return res;

		vector<int> list; //临时存储
		FindPathDFS(root, expectNumber, res, list);
		return res;
	}
};