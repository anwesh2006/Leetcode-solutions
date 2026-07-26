// Last updated: 7/26/2026, 4:02:39 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[count++]=nums[i];
            }
        }
        return count;
    }
};