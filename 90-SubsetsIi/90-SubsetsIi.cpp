// Last updated: 7/26/2026, 4:02:11 PM
class Solution {
public:
    void subs(int i,set<vector<int>> &res, vector<int> &curr, vector<int>& arr){
        if(i==arr.size()){
            res.insert(curr);
            return;
        }
        curr.push_back(arr[i]);
        subs(i+1,res,curr,arr);
        curr.pop_back();
        subs(i+1,res,curr,arr);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> res;
        sort(nums.begin(),nums.end());
        vector<vector<int>> res1;
        vector<int> curr;
        subs(0,res,curr,nums);
        for(const auto &a : res){
            res1.push_back(a);
        }
        return res1;
    }
};