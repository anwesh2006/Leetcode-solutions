// Last updated: 7/26/2026, 4:00:55 PM
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int sum_low=0;
        int sum_high=0;
        if(k>nums.size()) return 0;
        for(int i=0;i<k;i++){
            sum_low+=nums[i];
        }
        for(int i=n-1;i>=n-k;i--){
            sum_high+=nums[i];
        }
        return abs(sum_high-sum_low);
    }
};