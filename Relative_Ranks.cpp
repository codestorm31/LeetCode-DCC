/*
    506. Relative Ranks
    Question-Link: https://leetcode.com/problems/relative-ranks/description/
*/

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> mp;
        int n=score.size();
        
        for(int i=0;i<n;i++){
            mp[score[i]]=i;
        }
        sort(score.begin(),score.end(),greater<int>());
        vector<string> res(n,"0");
        auto it=mp.find(score[0]);
        int index=it->second;
        res[index]="Gold Medal";
        if(n==1) return res;
        auto it2=mp.find(score[1]);
        int index2=it2->second;
        res[index2]="Silver Medal";
        if(n==2) return res;
        auto it3=mp.find(score[2]);
        int index3=it3->second;
        res[index3]="Bronze Medal";
        if(n==3) return res;
        for(int i=3;i<n;i++){
            auto it=mp.find(score[i]);
            int index=it->second;
            res[index]=to_string(i+1);
        }
        return res;
    }
};