/*
    1122. Relative Sort Array
    Question-Link: https://leetcode.com/problems/relative-sort-array/description/
*/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr2.size();i++){
            mp[arr2[i]]=i;
        }
        sort(arr1.begin(),arr1.end(), [&mp](int a,int b){
            auto it_a=mp.find(a);
            auto it_b=mp.find(b);
            if(it_a!=mp.end() && it_b!=mp.end()){
                return it_a->second<it_b->second;
            }
            else if(mp.find(a)!=mp.end()){
                return true;
            }
            else if(mp.find(b)!=mp.end()){
                return false;
            }
            else{
                return a<b;
            }
        });
        return arr1;
    }
};