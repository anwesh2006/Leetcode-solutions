// Last updated: 7/26/2026, 4:01:06 PM
class Solution {
public:
    int daysreq(vector<int>& weights, int cap){
        int sum=0;
        int count =1;
        for(int i=0;i<weights.size();i++){
            if(sum + weights[i] <=cap){
                sum+=weights[i];
            }
            else{
                count++;
                sum=weights[i];
            }
        }
        return count;
    }
    int maxi(vector<int>& weights){
        int max = INT_MIN;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>max){
                max = weights[i];
            }
        }
        return max;
    }
    int sum(vector<int>& weights){
        int sum = 0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        return sum;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxi(weights);
        int high= sum(weights);
        while(low<=high){
            int mid = low + (high-low)/2;
            if(daysreq(weights,mid)<=days){
                high = mid-1;
            } else{
                low = mid+1;
            }
        }
        return low;
    }
};