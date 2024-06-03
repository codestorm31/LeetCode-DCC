/*
    2486. Append Characters to String to Make Subsequence
    Question-Link: https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/
*/

class Solution {
public:
    int appendCharacters(string s, string t) {
        int start=0,res=0;
        while(start<s.length() && res<t.length()){
            if(s[start]==t[res]){
                res++;
            }
            start++;
        }
        return t.length()-res;
    }
};