/*
    1038. Binary Search Tree to Greater Sum Tree
    Question-Link: https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/description/
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
private:
    int sum=0;
    void move(TreeNode* root){
        if(root){
            move(root->right);
            sum+=root->val;
            root->val=sum;
            move(root->left);
        }
    }


public:
    TreeNode* bstToGst(TreeNode* root) {
        move(root);
        return root;
    }
};