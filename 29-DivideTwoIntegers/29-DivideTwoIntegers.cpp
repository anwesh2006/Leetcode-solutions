// Last updated: 7/26/2026, 4:02:38 PM
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor ==-1){
            return INT_MAX;
        }
        long x = (long)dividend/(long)divisor;
        if(x>INT_MAX){
            return INT_MAX;
        } else if(x<INT_MIN){
            return INT_MIN;
        }
        return (int)x;
    }
};