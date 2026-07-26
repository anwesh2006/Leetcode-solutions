// Last updated: 7/26/2026, 4:02:51 PM
class Solution {
public:
    bool check_char(char ch ,int i,vector<string>& strs){
        for(auto word : strs){
            if(ch != word[i]){
                return false;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int pr =0;
        string prefix ="";
        string first = strs[0];
        for(int i=0;i<first.length();i++){
            char ch = first[i];
            if(check_char(ch ,i,strs)){
                prefix.push_back(ch);
            } else{
                return prefix;
            }
        }
        return prefix;
    }
};