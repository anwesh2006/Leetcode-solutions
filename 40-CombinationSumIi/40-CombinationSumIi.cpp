// Last updated: 7/26/2026, 4:02:31 PM
class Solution {
public:
    void comb(int i,int sum , int target, vector<int> &curr, set<vector<int>> &res, vector<int>& arr){
        if(i==arr.size()){
            if(sum==target){
                sort(curr.begin(),curr.end());
                res.insert(curr);
            }
            return;
        }
        if(sum>target) return;
        curr.push_back(arr[i]);
        comb(i+1,sum+arr[i],target,curr,res,arr);
        curr.pop_back();
        while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
    i++;
}
        comb(i+1,sum,target,curr,res,arr);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> res;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        comb(0,0,target,curr,res,candidates);
        vector<vector<int>> res1;
        for(auto &vec : res){
            res1.push_back(vec);
        }
        return res1;
    }
};