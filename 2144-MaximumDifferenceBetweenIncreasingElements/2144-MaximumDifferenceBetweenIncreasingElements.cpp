// Last updated: 7/26/2026, 4:00:57 PM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int ans = -1;
        int high = nums.size()-1;
        for(int i=1;i<=high;i++){
            mini = min(mini,nums[i]);
            if(nums[i] > mini){
                int diff = nums[i]-mini;
                ans = max(ans,diff);
            }
        }
        return ans;
    }
};