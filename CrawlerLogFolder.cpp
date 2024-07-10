/*
    1598. Crawler Log Folder
    Question-Link: https://leetcode.com/problems/crawler-log-folder/description/
*/

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n=logs.size();
        stack<string> st;
        for(int i=0;i<n;i++){
            if(!st.empty() && logs[i]=="../"){
                st.pop();
            }
            else if(logs[i]!="./" && logs[i]!="../")
            {
                st.push(logs[i]);
            }
        }
        return st.size();
    }
};