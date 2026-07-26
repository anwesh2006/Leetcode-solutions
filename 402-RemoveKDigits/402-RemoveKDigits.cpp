// Last updated: 7/26/2026, 4:01:24 PM
class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        int top = 0;
        for(int i=0;i<n;i++){
            char c = num[i];
            while(top>0  && k>0 && num[top-1] > c){
                top--;
                k--;
            }
            if(top>0 || c!= '0'){
                num[top++] = c;
            }
        }
        top = max(0, top - k);
        if(top ==0){
            return "0";
        }
        return num.substr(0,top);
    }
};