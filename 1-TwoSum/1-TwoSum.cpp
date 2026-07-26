// Last updated: 7/26/2026, 4:02:56 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int comp = target-nums[i];
            if(mpp.find(comp) != mpp.end()){
                return {i,mpp[comp]};
            }
            mpp[nums[i]] = i;
        } 
        return {};
    }
};