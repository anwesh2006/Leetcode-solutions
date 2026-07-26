// Last updated: 7/26/2026, 4:01:34 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
        return false;
        unordered_map<char,int> mpp;
        for(char c : s){
            mpp[c]++;
        }
        for(char c : t){
            if(!mpp.count(c)){
                return false;
            }
            mpp[c]--;
            if(mpp[c] == 0){
                mpp.erase(c);
            }
        }
        if(mpp.empty()){
            return true;
        }
        return false;
    }
};