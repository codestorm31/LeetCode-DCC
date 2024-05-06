/*
    2487. Remove Nodes From Linked List
*/


class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=head;
        stack<ListNode*> st;

        while(temp!=NULL){
            while(!st.empty() && st.top()->val<temp->val){
                st.pop();
            }
            st.push(temp);
            temp=temp->next;
        }

        ListNode* nxt=nullptr;
        while(!st.empty()){
            temp=st.top();
            st.pop();
            temp->next=nxt;
            nxt=temp;
        }
        return temp;
    }
};