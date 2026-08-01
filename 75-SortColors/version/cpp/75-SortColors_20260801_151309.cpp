// Last updated: 8/1/2026, 3:13:09 PM
/*
 * 0 to low-1 ==0 ,
 * low to mid-1 =1, 
 * mid to high-1 = unsorted
 * high to n-1 = 2
*/

1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int low =0;
5        int mid = 0;
6        int high = nums.size()-1;
7        while(mid<=high){
8            if(nums[mid] == 0){
9                swap(nums[low],nums[mid]);
10                low++;
11                mid++;
12            } else if(nums[mid] == 1){
13                mid++;
14            } else{
15                swap(nums[mid],nums[high]);
16                high--;
17            }
18        }
19    }
20};