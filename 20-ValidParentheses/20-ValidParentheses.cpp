// Last updated: 7/26/2026, 4:02:45 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            } else if(c == ')' || c == '}' || c == ']'){
                if(st.empty()){
                    return false;
                }
                if((c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')){
                    return false;
                }
                st.pop();
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};