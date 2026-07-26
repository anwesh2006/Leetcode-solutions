// Last updated: 7/26/2026, 4:01:01 PM
class Solution {
public:
    int fmax(vector<int>& bloomDay){
        int max = INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]>max){
                max = bloomDay[i];
            }
        }
        return max;
    }
    bool possible(vector<int>& nums, int threshold,int mid){
        int n = nums.size();
        long long sum =0;
        for(int i=0;i<n;i++){
            sum += ceil((double)nums[i]/(double)mid);
        }
        if(sum<=threshold){
            return true;
        }
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = fmax(nums);
        while(low<=high){
            int mid = low + (high-low)/2;
            if(possible(nums,threshold,mid)){
                high = mid-1;
            } else{
                low = mid+1;
            }
        }
        return low;
    }
};