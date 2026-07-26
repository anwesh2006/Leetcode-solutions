// Last updated: 7/26/2026, 4:01:15 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0 || stk.empty()){
                stk.push(asteroids[i]);
            }
            else{
                while(!stk.empty() && stk.top()>0 && stk.top()<abs(asteroids[i])){
                    stk.pop();
                }
                if(!stk.empty() && stk.top()==abs(asteroids[i])){
                    stk.pop();
                    continue;
                }
                if(!stk.empty() && stk.top()>abs(asteroids[i])){
                    continue;
                }
                stk.push(asteroids[i]);
            }
        }
        vector<int> res;
        while(!stk.empty()){
            res.insert(res.begin(),stk.top());
            stk.pop();
        }
        return res;
    }
};