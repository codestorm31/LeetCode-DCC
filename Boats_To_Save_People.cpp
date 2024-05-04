/*
    881. Boats to Save People
    Question Link: https://leetcode.com/problems/boats-to-save-people/description/
*/

class Solution {
public:
    int numRescueBoats(vector<int>& p, int lim) {
        sort(p.begin(),p.end());
        int res=0;
        int n=p.size();
        int i=0,j=n-1;
        while(i<=j){
            if(p[i]+p[j]<=lim){
                i++;
            }
            j--;
            res++;
        }
        return res;
    }
};