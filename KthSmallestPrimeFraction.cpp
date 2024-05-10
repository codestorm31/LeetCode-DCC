/*
    786. K-th Smallest Prime Fraction
    Question Link: https://leetcode.com/problems/k-th-smallest-prime-fraction/description/
*/

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<pair<float,pair<int,int>>> res;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            {
                double temp=(double)arr[i]/arr[j];
                res.push_back({temp,{arr[i],arr[j]}});
            }
        }
        sort(res.begin(),res.end());
        auto it=res[k-1].second;
        return {it.first,it.second};
    }
};