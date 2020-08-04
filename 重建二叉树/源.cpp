#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

//Definition for binary tree
struct TreeNode {
    int val;
	TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	TreeNode* reConstruct(vector<int> pre, int pre_begin, int pre_end, vector<int> vin, int vin_begin, int vin_end) {
		if (pre_begin > pre_end || vin_begin > vin_end) {
			return NULL;
		}

		TreeNode* root = new TreeNode(pre[pre_begin]);
		//经过循环 把中序遍历找到根结点，将中序遍历分为左数组 根结点 右数组
		for (auto i = vin_begin; i <= vin_end; i++) {
			if (vin[i] == pre[pre_begin]) {
				//找到结点  //左 [vin_begin, i-1]  i  右 [i+1, vin_end]
				root->left = reConstruct(pre, pre_begin + 1, pre_begin + i - vin_begin, vin, vin_begin, i - 1);
				root->right = reConstruct(pre, pre_begin + i - vin_begin + 1, pre_end, vin, i + 1, vin_end);
				break;
			}
		}
		return root;
	}

	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		if (pre.size() == 0 || vin.size() == 0 || pre.size() != vin.size())
			return NULL;
		TreeNode* root = reConstruct(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);
		return root;
	}
};