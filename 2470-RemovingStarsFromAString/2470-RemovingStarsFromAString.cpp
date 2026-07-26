// Last updated: 7/26/2026, 4:00:52 PM
class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char &c : s){
            if(c == '*' && !st.empty()){
                st.pop();
                continue;
            }
            st.push(c);
        }
        vector<char> res ;
        while(!st.empty()){
            char m = st.top();
            st.pop();
            res.push_back(m);
        }
        reverse(res.begin(),res.end());
        string str(res.begin(),res.end());
        return str;
    }
};