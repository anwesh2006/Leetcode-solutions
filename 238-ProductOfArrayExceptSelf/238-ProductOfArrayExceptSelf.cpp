// Last updated: 7/26/2026, 4:01:36 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefix[n];
        int postfix[n];
        prefix[0] = 1;
        postfix[n-1] =1;
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            postfix[i] = postfix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            nums[i] = prefix[i]*postfix[i];
        }
        return nums;
    }
};