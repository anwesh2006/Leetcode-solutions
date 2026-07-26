// Last updated: 7/26/2026, 4:01:47 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int maps[256] ={0};
        int mapt[256] ={0};
        int sl = s.length()-1;
        int st = t.length()-1;
        if(sl != st) return false;
        for(int i=0;i<=sl;i++){
            char sc = s[i];
            char st = t[i];
            if(maps[sc]!=0 && maps[sc] != st) return false;
            if(mapt[st]!=0 && mapt[st] != sc) return false;
            
            maps[sc] =st;
            mapt[st] =sc;
        }
        return true;
    }
};