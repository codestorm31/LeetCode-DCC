/*
    3110. Score of a String
    Question-Link: https://leetcode.com/problems/score-of-a-string/description/
*/

class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int score=0;
        for(int i=0;i<n-1;i++){
            int a=s[i];
            int b=s[i+1];
            int diff=abs(a-b);
            score+=diff;
        }
        return score;
    }
};