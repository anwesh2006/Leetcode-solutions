// Last updated: 8/1/2026, 3:01:35 PM
// uses maximum of either arr[i] or sum
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int maxi = nums[0];
5        int res = nums[0];
6        for(int i=1;i<nums.size();i++){
7            maxi = max(nums[i],maxi+nums[i]);
8            res= max(res,maxi);
9        }
10        return res;
11    }
12};