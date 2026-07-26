// Last updated: 7/26/2026, 4:01:20 PM
class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt =0;
        for(int i=0;i<32;i++){
            if(( (x & (1 << i)) ^ (y & (1 << i)) ) != 0) {
                cnt++;
            }
        }
        return cnt;
    }

};