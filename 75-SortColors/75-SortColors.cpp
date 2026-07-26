// Last updated: 7/26/2026, 4:02:15 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low =0;
        int mid =0;
        int high = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                mid++;
                low++;
            } else if(nums[mid] ==1){
                mid++;
            } else if(nums[mid] ==2){
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }
        }
    }
};