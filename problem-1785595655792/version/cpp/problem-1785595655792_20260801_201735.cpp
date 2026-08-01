// Last updated: 8/1/2026, 8:17:35 PM
1class Solution {
2public:
3    bool check(int i,string s){
4        int cnt1 = 0;
5        int cnt0 = 0;
6        for(int j=0;j<=i;j++){
7            if(s[j] == '0') cnt0++;
8            else cnt1++;
9        }
10        if((cnt1 == (cnt0+1)) || cnt1 == (cnt0-1) || cnt1 == cnt0){
11            return true;
12        } else {
13            return false;
14        }
15    }
16    int countValidPrefixes(string s) {
17        int cnt =1;
18        if(s.size() == 1) return 1;
19        for(int i=1;i<s.size();i++){
20            if(check(i,s)) cnt++;
21        }
22        return cnt;
23    }
24};