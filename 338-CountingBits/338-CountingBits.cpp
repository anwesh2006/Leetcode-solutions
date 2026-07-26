// Last updated: 7/26/2026, 4:01:28 PM
class Solution {
public:
    int cnt(int m){
        int incnt =0;
        for(int i=0;i<32;i++){
            if((m & (1 << i)) != 0){
                incnt++;
            }
        }
        return incnt;
    }
    vector<int> countBits(int n) {
        vector<int> arr;
        for(int i=0;i<n+1;i++){
            arr.push_back(cnt(i));
        }
        return arr;
    }
};