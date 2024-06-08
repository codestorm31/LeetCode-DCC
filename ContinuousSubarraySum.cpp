/*
    523. Continuous Subarray Sum
    Question-Link:https://leetcode.com/problems/continuous-subarray-sum/description/
*/

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int pre_sum =0,n=nums.size();
        mp[0]=-1; 
        for(int i=0;i<n;i++) {
            pre_sum+=nums[i];
            if (k!=0)pre_sum%=k; 
            if(mp.find(pre_sum)!=mp.end()) {
                if(i-mp[pre_sum]>1)return true; 
            } else {
                mp[pre_sum] = i;
            }
        }
        return false;
    }
};