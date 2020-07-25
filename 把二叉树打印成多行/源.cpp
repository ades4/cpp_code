#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};

vector<vector<int> > Print(TreeNode* pRoot) {
	vector<vector<int> > v;
	queue<TreeNode*> d;
	if (pRoot != NULL)
		d.push(pRoot);
	while (!d.empty())
	{
		vector<int> tmp;
		int n = d.size();
		for (int i = 0; i < n; i++) {
			tmp.push_back(d.front()->val);

			if (d.front()->left)
				d.push(d.front()->left);
			if (d.front()->right)
				d.push(d.front()->right);
			d.pop();
		}
		v.push_back(tmp);
	}
	return v;
}