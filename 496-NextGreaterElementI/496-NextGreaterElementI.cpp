// Last updated: 7/26/2026, 4:01:18 PM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack<int> stk;
        unordered_map<int,int> mp;
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && nums2[i] >= stk.top()){
                stk.pop();
            }
            if(stk.empty()){
                mp[nums2[i]] = -1;
            } else{
                mp[nums2[i]] = stk.top();
            }
            stk.push(nums2[i]);
        }
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            res.push_back(mp[nums1[i]]);
        }
        return res;
    }
};