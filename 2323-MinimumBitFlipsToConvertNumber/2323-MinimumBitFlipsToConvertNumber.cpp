// Last updated: 7/26/2026, 4:00:51 PM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int m = start ^ goal;
        int count =0;
        for(int i=0;i<32;i++){
            if((m & (1<<i)) != 0){
                count++;
            }
        }
        return count;
    }
};