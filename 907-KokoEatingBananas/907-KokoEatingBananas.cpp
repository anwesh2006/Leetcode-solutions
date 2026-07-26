// Last updated: 7/26/2026, 4:01:10 PM
class Solution {
public:
    int fun_max(vector<int>& arr){
        int maxi = INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxi = max(arr[i],maxi);
        }
        return maxi;

    }
    long long hours(vector<int>& arr,int m){
        long long sum =0;
        for(int i=0;i<arr.size();i++){
            sum += ceil((double)arr[i] / (double)m);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = fun_max(piles);
        while(low<=high){
            int mid = low + (high-low)/2;
            if(hours(piles,mid)<=h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};