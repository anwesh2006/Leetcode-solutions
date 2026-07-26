// Last updated: 7/26/2026, 4:02:21 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() - 1;
        while(end >=0 && s[end] == ' '){
            end--;
        }
        int count = 0;
        while( end >=0 && s[end] != ' '){
            count++;
            end--;
        }
        return count;
    }
};