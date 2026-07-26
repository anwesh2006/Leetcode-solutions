// Last updated: 7/26/2026, 4:01:41 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        long long temp = (long long)n-1;
        if((n&temp) !=0){
            return false;
        }
        return true;
    }
};