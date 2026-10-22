class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> temp = matrix;
        vector<pair<int,int>> zeros;
        int r = matrix.size();
        int c = matrix[0].size();

        for(int i = 0 ; i < r ; i++) {
            for(int j = 0 ; j < c ; j++) {
                if(matrix[i][j] == 0) {
                    zeros.push_back({i , j});
                }
            }
        }

        for(auto it : zeros) {
            int i = it.first;
            for(int j = 0; j < c ; j++) {
                temp[i][j] = 0;
            }
            int j = it.second;
            for(int k = 0 ; k < r ; k++) {
                temp[k][j] = 0;
            }
        }
        matrix = temp;
    }
};