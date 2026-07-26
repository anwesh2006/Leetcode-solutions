// Last updated: 7/26/2026, 4:01:04 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        string res = "";
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                if(count!=0){
                    res.push_back(s[i]);
                }
                count++;
            } else{
                count--;
                if(count!=0){
                    res.push_back(s[i]);
                }
            }
        }
        return res;
    }
};