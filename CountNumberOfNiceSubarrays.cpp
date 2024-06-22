/*
    1248. Count Number of Nice Subarrays
    Question-Link: https://leetcode.com/problems/count-number-of-nice-subarrays/description/
*/

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        int pre_sum=0,res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            pre_sum+=nums[i];
            if(pre_sum==k){
                res++;
            }
            if(mp.find(pre_sum-k)!=mp.end()){
                res+=mp[pre_sum-k];
            }
            mp[pre_sum]++;
        }
        return res;
    }
};