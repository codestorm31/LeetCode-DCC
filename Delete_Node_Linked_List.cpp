/*
    237. Delete Node in a Linked List
    Question-Link: https://leetcode.com/problems/delete-node-in-a-linked-list/description/
*/


class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};