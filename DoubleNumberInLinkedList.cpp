/*
    2816. Double a Number Represented as a Linked List
    Question-Link: https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/description/
*/

class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        vector<int>v,v1;
        ListNode*temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        if(v.size()==1 && v[0]==0){
            return head;
        }
        else{
            int carry=0;
            for(int i=v.size()-1;i>=0;i--){
                carry=(v[i]*2)+carry;
                v1.push_back(carry%10);
                carry/=10;
            }
            if(carry>0)
                v1.push_back(carry);
            head=NULL;
            temp=NULL;
            for(int i=v1.size()-1;i>=0;i--){
                ListNode*newNode=new ListNode(v1[i]);
                if(head==NULL){
                    head=temp=newNode;
                }
                else{
                    temp->next=newNode;
                    temp=newNode;
                }
            }
        }
        return head;
    }
};