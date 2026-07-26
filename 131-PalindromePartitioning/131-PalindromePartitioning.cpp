// Last updated: 7/26/2026, 4:02:06 PM
class Solution {
public:
    bool isPalindrome(string str,int start,int end){
        while(start<=end){
            if(str[start++] != str[end--]){
                return false;
            }
        }
        return true;
    }
    void comb(int i,string &s, vector<vector<string>> &res,vector<string> &path){
        if(i==s.size()){
            res.push_back(path);
            return;
        }
        for(int j =i;j<s.size();j++){
            if(isPalindrome(s,i,j)){
                path.push_back(s.substr(i,j-i+1));
                comb(j+1,s,res,path);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        comb(0,s,res,path);
        return res;
    }
};