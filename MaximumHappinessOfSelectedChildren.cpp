/*
    3075. Maximize Happiness of Selected Children
    Question Link: https://leetcode.com/problems/maximize-happiness-of-selected-children/description/
*/

class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(),h.end(),greater<int> ());
        long long res=0;
        int j=0;
        for(int i=0;i<k;i++){
            res+=max(h[i]-j,0);
            j++;
        }
        return res;
    }
};