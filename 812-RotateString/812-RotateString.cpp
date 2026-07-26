// Last updated: 7/26/2026, 4:01:11 PM
class Solution {
public:
    string leftrotate(string s){
        int n = s.length();
        return (s.substr(n-1) + s.substr(0,n-1));
    }
    bool rotateString(string s, string goal) {
        string temp =s;
        for(int i=0;i<s.length();i++){
            if(leftrotate(temp) == goal){
                return true;
            }
            temp = leftrotate(temp);
        }
        return false;
    }
};