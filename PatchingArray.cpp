/*
    330. Patching Array
    Question-Link: https://leetcode.com/problems/patching-array/description/
*/

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long missing=1;
        int patches=0;
        int ind=0;
        while(missing<=n){
            if(ind<nums.size() && nums[ind]<=missing){
                missing+=nums[ind];
                ind++;
            }
            else{
                missing+=missing;
                patches++;
            }
        }
        return patches;
    }
};