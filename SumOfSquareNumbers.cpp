/*
    633. Sum of Square Numbers
    Question-Link: https://leetcode.com/problems/sum-of-square-numbers/description/
*/

class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_map<int,int> mp;
        for(int i=0;i<=sqrt(c);i++){
            mp[i*i]=1;
            if(mp.find(c-(i*i))!=mp.end()){
                return true;
            }
        }
        return false;
    }
};