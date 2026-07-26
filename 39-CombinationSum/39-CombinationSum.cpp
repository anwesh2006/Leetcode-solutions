// Last updated: 7/26/2026, 4:02:32 PM
class Solution {
public:
    void comb(int target , int i,vector<vector<int>> &res,vector<int> &arr, vector<int> &temp){
        if(i==arr.size()){
            if(target ==0){
                res.push_back(temp);
            }
            return;
        }
        if(arr[i] <= target){
            temp.push_back(arr[i]);
            comb(target-arr[i] , i ,res,arr,temp);
            temp.pop_back();
        }
        comb(target,i+1,res,arr,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        comb(target,0,res,candidates,temp);
        return res;
    }
};