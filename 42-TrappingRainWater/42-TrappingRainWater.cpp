// Last updated: 7/26/2026, 4:02:30 PM
class Solution {
public:
    int trap(vector<int>& height) {
        int l = 1;
        int r = height.size()-2;
        int lmax = height[0];
        int rmax = height[height.size()-1];
        int sum =0;
        while(l<=r){
            if(lmax <= rmax){
                sum += max(0,lmax-height[l]);
                lmax = max(lmax,height[l]);
                l++;
            } else{
                sum += max(0,rmax-height[r]);
                rmax = max(rmax,height[r]);
                r--;
            }
        }
        return sum;
    }
};