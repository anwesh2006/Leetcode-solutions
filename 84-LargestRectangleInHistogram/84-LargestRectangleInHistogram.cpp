// Last updated: 7/26/2026, 4:02:12 PM
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxi = 0;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int element = heights[st.top()];
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();
                int area = element * (nse-pse-1);
                maxi = max(maxi,area);
            }
            st.push(i);
        }
        while(!st.empty()){
            int nse = heights.size();
            int element = heights[st.top()];
            st.pop();
            int pse = st.empty() ? -1 : st.top();
            maxi = max(maxi, element*(nse-pse-1));
        }
        return maxi;
    }
};