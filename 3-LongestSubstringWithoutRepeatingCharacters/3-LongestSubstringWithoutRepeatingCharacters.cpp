// Last updated: 7/26/2026, 4:02:55 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256,-1); 
        int l = 0;
        int maxi = 0;
        int r = 0;

        while(r < s.size()){
            l = max(l, last[s[r]] + 1);
            maxi = max(maxi, r - l + 1);
            last[s[r]] = r;
            r++;
        }

        return maxi;
    }
};