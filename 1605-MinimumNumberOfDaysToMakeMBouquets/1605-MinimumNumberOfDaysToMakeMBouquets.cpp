// Last updated: 7/26/2026, 4:01:03 PM
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
    int fmin(vector<int>& bloomDay){
        int min = INT_MAX;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<min){
                min = bloomDay[i];
            }
        }
        return min;
    }
    int cnt(vector<int>& bloomDay,int m,int k){
        int n = bloomDay.size();
        int cntt =0;
        int count =0;
        for(int i=0;i<n;i++){
            if(bloomDay[i] <=m){
                cntt++;
            }
            else{
                count += cntt/k;
                cntt = 0;
            }
        }
        count += cntt/k;
        return count;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = fmin(bloomDay);
        int high = fmax(bloomDay);
        int n = bloomDay.size();
        if(((long long) m*k) >n) return -1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(cnt(bloomDay,mid,k)>=m){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};