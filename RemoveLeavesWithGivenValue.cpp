/*
    1325. Delete Leaves With a Given Value
    Question-Link: https://leetcode.com/problems/delete-leaves-with-a-given-value/description/
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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root==NULL) return NULL;

        root->right=removeLeafNodes(root->right,target);
        root->left=removeLeafNodes(root->left,target);

        if(root->val==target && root->right==NULL && root->left==NULL){
            return NULL;
        }
        return root;
    }
};