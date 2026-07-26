// Last updated: 7/26/2026, 4:02:28 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=i+1;j<c;j++){
                matrix[i][j] = matrix[j][i] ^ matrix[i][j];
                matrix[j][i] = matrix[j][i] ^ matrix[i][j];
                matrix[i][j] = matrix[j][i] ^ matrix[i][j];
            }
        }
        for(int i=0;i<r;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};