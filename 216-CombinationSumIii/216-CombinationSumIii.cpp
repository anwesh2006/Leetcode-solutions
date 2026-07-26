// Last updated: 7/26/2026, 4:01:43 PM
class Solution {
public:
    void comb3(int i, int sum,vector<int> &curr, set<vector<int>> &res, int k, int n){
        if (sum > n)
    return;
        if(curr.size() == k){
            if(sum==n){
                res.insert(curr);
            }
            return;
        }
        if(i>9) return;
        curr.push_back(i);
        comb3(i+1,sum+i,curr,res,k,n);
        curr.pop_back();
        comb3(i+1,sum,curr,res,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        set<vector<int>> res;
        vector<int> curr;
        vector<vector<int>> res1;
        comb3(1,0,curr,res,k,n);
        for(auto &a : res){
            res1.push_back(a);
        }
        return res1;
    }
};