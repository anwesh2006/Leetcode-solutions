// Last updated: 7/26/2026, 4:01:32 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
        }
        long long ac = (n*(n+1))/2;
        return (ac-sum);
    }
};