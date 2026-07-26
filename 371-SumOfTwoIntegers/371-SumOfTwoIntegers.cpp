// Last updated: 7/26/2026, 4:01:26 PM
class Solution {
public:
    int getSum(int a, int b) {
        bool carry = false;
        int res=0;
        for(int i=0;i<32;i++){
            if(!carry){
                res = res ^ (a & (1<<i)) ^ (b & (1<<i));
                if(((a & (1<<i)) & (b & (1<<i))) != 0){
                    carry = true;
                }
            }
            else{
                res = res ^ (a & (1<<i)) ^ (b & (1<<i)) ^ (1<<i);
                carry=false;
                if( (( (a & (1<<i)) & (1<<i) ) !=0)
                 || (( (b & (1<<i)) & (1<<i) ) != 0))
                 {
                    carry = true;
                }
            }
        }
        return res;
    }
};