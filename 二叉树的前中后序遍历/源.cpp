#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};
 
class Solution {
public:
	/**
	 *
	 * @param root TreeNode¿‡ the root of binary tree
	 * @return int’˚–Õvector<vector<>>
	 */
	vector<int> pro_re, mid_re, end_re;
	void ProOrders(TreeNode* root) {
		if (root) {
			pro_re.push_back(root->val);
			ProOrders(root->left);
			ProOrders(root->right);
		}
	}

	void MidOrders(TreeNode* root) {
		if (root) {
			MidOrders(root->left);
			mid_re.push_back(root->val);
			MidOrders(root->right);
		}
	}
	void EndOrders(TreeNode* root) {
		if (root) {
			EndOrders(root->left);
			EndOrders(root->right);
			end_re.push_back(root->val);
		}
	}
	vector<vector<int> > threeOrders(TreeNode* root) {
		// write code here
		vector<vector<int> > res;
		if (root == NULL)
			return res;
		else {
			ProOrders(root);
			MidOrders(root);
			EndOrders(root);
			res.push_back(pro_re);
			res.push_back(mid_re);
			res.push_back(end_re);
		}
		return res;
	}
};