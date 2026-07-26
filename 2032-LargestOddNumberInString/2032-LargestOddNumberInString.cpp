// Last updated: 7/26/2026, 4:00:59 PM
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i =num.length()-1 ;i>=0 ;i--){
            int c = num[i] -'0';
            if(c%2 != 0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};