// Last updated: 7/26/2026, 4:01:22 PM
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char ,int> mpp;
        for(char c : s){
            mpp[c]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto [key, value] : mpp) {
            pq.push({value,key});
        }
        string ans = "";
        while(!pq.empty()){
            for(int i=0;i<pq.top().first;i++){
                ans.push_back(pq.top().second);
            }
            pq.pop();
        }
        return ans;
    }
};