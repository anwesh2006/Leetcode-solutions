// Last updated: 7/26/2026, 4:02:05 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x ^=nums[i];
        }
        return x;
    }
};