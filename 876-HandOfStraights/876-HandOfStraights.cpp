// Last updated: 7/26/2026, 4:01:12 PM
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize != 0) return false;
        map<int, int> mpp;
        for(int i : hand){
            mpp[i]++;
        }
        while(!mpp.empty()){
            int start = mpp.begin()->first;
            for(int i=0;i<groupSize;i++){
                int curr = start+i;
                if(!mpp.count(curr)){
                    return false;
                }
                mpp[curr]--;
                if(mpp[curr] == 0){
                    mpp.erase(curr);
                }
            }
        }
        return true;
    }
};