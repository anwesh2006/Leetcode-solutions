// Last updated: 7/26/2026, 4:01:51 PM
class Solution {
public:
    int reverseBits(int n) {
        int ans =0;
        for(int i=0;i<16;i++){
            if((n & (1 << i)) != 0){
                ans = ans ^ (1<<31-i);
            }
            if((n & (1 << (31-i))) != 0){
                ans = ans ^ (1<<(i));
            }
        }
        return ans;
    }
};