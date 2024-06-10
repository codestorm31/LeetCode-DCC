/*
    1051. Height Checker
    Question-Link: https://leetcode.com/problems/height-checker/description/
*/

class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> ex=h;
        int c=0;
        sort(ex.begin(),ex.end());
        for(int i=0;i<h.size();i++){
            if(h[i]!=ex[i]) c++;
        }
        return c;
    }
};