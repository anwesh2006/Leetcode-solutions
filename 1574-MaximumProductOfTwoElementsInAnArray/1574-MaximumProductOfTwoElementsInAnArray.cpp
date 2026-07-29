// Last updated: 7/29/2026, 4:20:15 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first =-1;
        int second = -1;
        for(int i=0;i<nums.size();i++){
            if(first<nums[i]){
                second = first;
                first = nums[i];
            }
            else if(nums[i]>second){
                second = nums[i];
            }
        }
        return (first-1)*(second-1);
    }
};