// Last updated: 7/26/2026, 4:02:18 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();
        vector<pair<int,int>> zeros;
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 0){
                    zeros.push_back({i,j});
                }
            }
        }
        for(auto &pair : zeros){
            int i =pair.first;
            int j = pair.second;
            for(int k =0;k<rows;k++){
                matrix[k][j] = 0;
            }
            for(int k =0;k<col;k++){
                matrix[i][k] = 0;
            }
        }
    }
};