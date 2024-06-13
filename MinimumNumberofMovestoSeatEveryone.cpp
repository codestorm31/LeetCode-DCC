/*
    2037. Minimum Number of Moves to Seat Everyone
    Question-Link: https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/description/
*/

class Solution {
public:
    int minMovesToSeat(vector<int>& se, vector<int>& st) {
        sort(se.begin(),se.end());
        sort(st.begin(),st.end());
        int res=0;
        for(int i=0;i<se.size();i++){
            res+=abs(se[i]-st[i]);
        }
        return res;
    }
};