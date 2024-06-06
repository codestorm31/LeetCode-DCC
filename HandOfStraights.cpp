/*
    846. Hand of Straights
    Question-Link: https://leetcode.com/problems/hand-of-straights/description/
*/


class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int gsize) {
        int n=hand.size();
        if(n%gsize!=0) return false;
        map<int,int> cc;
        for(int i:hand){
            cc[i]++;
        }

        while(cc.size()>0){
            int min_val=cc.begin()->first;
            for(int card=min_val;card<min_val+gsize;card++){
                if(cc.find(card)==cc.end()){
                    return false;
                }
                int count=cc[card];
                if(count==1) {
                    cc.erase(card);
                }
                else{
                    cc[card]=count-1;
                }
            }
        }
        return true;
    }
};