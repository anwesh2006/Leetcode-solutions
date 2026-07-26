// Last updated: 7/26/2026, 4:02:41 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[count]!=nums[i]){
                count++;
                nums[count]=nums[i];
                
            }
        }
        return count+1;
    }
};