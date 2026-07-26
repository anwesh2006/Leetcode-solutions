// Last updated: 7/26/2026, 4:01:48 PM
class Solution {
public:
    int hammingWeight(int n) {
        int cnt =0;
        for(int i=0;i<32;i++){
            if((n & (1 << i) ) != 0){
                cnt++;
            }
        }
        return cnt;
    }
};