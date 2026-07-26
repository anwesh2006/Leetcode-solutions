// Last updated: 7/26/2026, 4:01:59 PM
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> res;
        while(ss >> word){
            res.push_back(word);
        }
        reverse(res.begin(),res.end());
        stringstream ress;
        for(int i=0;i<res.size();i++){
            if(i!=0){
                ress << " ";
            }
            ress << res[i];
        }
        string resss = ress.str();
        return resss;
    }
};