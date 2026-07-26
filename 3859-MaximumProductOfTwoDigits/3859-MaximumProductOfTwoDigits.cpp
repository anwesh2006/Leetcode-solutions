// Last updated: 7/26/2026, 4:00:54 PM
class Solution {
public:
    int maxProduct(int n) {
        priority_queue<int> pq;
        while(n>0){
            int d = n%10;
            pq.push(d);
            n = n/10;
        }
        int res =1;
        for(int i=0;i<2&&!pq.empty();i++){
            res*=pq.top();
            pq.pop();
        }
        return res;
    }
};