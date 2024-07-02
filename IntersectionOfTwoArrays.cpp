/*
    350. Intersection of Two Arrays II
    Question-Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums2[j]<nums1[i]){
                j++;
            }
            else{
                res.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return res;
    }
};