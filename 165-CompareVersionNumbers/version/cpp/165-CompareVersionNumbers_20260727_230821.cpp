// Last updated: 7/27/2026, 11:08:21 PM
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4
5        int i = 0, j = 0;
6        int n = version1.size();
7        int m = version2.size();
8
9        while (i < n || j < m) {
10
11            int num1 = 0;
12            int num2 = 0;
13
14            while (i < n && version1[i] != '.') {
15                num1 = num1 * 10 + (version1[i] - '0');
16                i++;
17            }
18
19            while (j < m && version2[j] != '.') {
20                num2 = num2 * 10 + (version2[j] - '0');
21                j++;
22            }
23
24            if (num1 > num2) return 1;
25            if (num1 < num2) return -1;
26
27            i++;
28            j++;
29        }
30
31        return 0;
32    }
33};