/*
    974. Subarray Sums Divisible by K
    Question-Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/description/
*/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int pre_sum=0,n=nums.size();
        int c=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            pre_sum+=nums[i];
            int rem=pre_sum%k;
            if(rem<0){
                rem+=k;
            }
            if(mp.find(rem)!=mp.end()){
                c+=mp[rem];
                mp[rem]++;
            }
            else{
                mp[rem]=1;
            }
        }
        return c;
    }
};