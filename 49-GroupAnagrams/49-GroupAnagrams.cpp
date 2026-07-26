// Last updated: 7/26/2026, 4:02:26 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(auto &str : strs){
            string temp = str;
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(str);
        }
        vector<vector<string>> res;
        for(auto &pair : mpp){
            res.push_back(pair.second);
        }
        return res;
    }
};