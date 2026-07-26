// Last updated: 7/26/2026, 4:01:07 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi =0;
        int left=0;
        int max_zero =0;
        for(int right=0;right<nums.size();right++){
            if(nums[right] == 0){
                max_zero++;
            }
            while(max_zero>k && left<=right){
                if(nums[left] ==0){
                    max_zero--;
                }
                left++;
            }
            maxi = max(maxi,right-left+1);
        }
        return maxi;
    }
};