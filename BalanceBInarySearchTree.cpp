/*
    1382. Balance a Binary Search Tree
    Question-Link:https://leetcode.com/problems/balance-a-binary-search-tree/description/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> res;
        function<void(TreeNode*)> dfs = [&](TreeNode* root) {
            if(root == NULL) return;
            dfs(root->left);
            res.push_back(root);
            dfs(root->right);
        };
        dfs(root);
        function<TreeNode*(int, int)> dfs1 = [&](int l, int r) {
            if(l > r) return (TreeNode*)NULL;
            
            int m = l + (r-l)/2;
            TreeNode* root = res[m];
            root->left = dfs1(l, m-1);
            root->right = dfs1(m+1, r);
            return root;
        };
        
        return dfs1(0, res.size()-1);
    }
};