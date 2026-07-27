// Last updated: 7/27/2026, 6:32:41 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int first =-1;
5        int second = -1;
6        for(int i=0;i<nums.size();i++){
7            if(first<nums[i]){
8                second = first;
9                first = nums[i];
10            }
11            else if(nums[i]>second){
12                second = nums[i];
13            }
14        }
15        return (first-1)*(second-1);
16    }
17};