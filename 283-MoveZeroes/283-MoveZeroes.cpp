// Last updated: 7/26/2026, 4:01:31 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left =0;
        int right = 0;
        while(right<nums.size()){
            if(nums[right] != 0){
                int temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;
                left++;
            }
            right++;
        }
    }
};