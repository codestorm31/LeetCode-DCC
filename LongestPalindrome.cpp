/*
    409. Longest Palindrome
    Question-Link: https://leetcode.com/problems/longest-palindrome/description/
*/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> st;
        int res=0;
        for(char c:s){
            if(st.find(c)!=st.end()){
                res+=2;
                st.erase(c);
            }
            else{
                st.insert(c);
            }
        }
        if(!st.empty()){
            res+=1;
        }
        return res;
    }
};