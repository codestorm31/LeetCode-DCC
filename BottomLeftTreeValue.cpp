//Level Order Traversal
//Double Ended Queue - Dequeue is used
//Traverse from right to left in a level
//O(N)

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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> lvl;
        lvl.push(root);
        int leftVal=root->val;
        while(!lvl.empty()){
            int currlvlSize=lvl.size();
            int size2=currlvlSize;
            while(currlvlSize-->0){
                TreeNode* curr=lvl.front();
                lvl.pop();
                if(size2-1==currlvlSize){
                    leftVal=curr->val;
                }
                if(curr->left!=NULL)
                {
                    lvl.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    lvl.push(curr->right);
                }
            }
        }
        return leftVal;
    }
};