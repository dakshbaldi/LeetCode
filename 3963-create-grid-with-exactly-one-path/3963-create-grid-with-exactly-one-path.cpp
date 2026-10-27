class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m , string(n ,'#'));
        int k = 0;
        grid[0][0] = '.';
        grid[m-1][n-1] = '.';

        for(int i = 1 ; i <= n ; i++) {
            if(i == n) i--;
            grid[k][i] = '.';
            k++;
            if(k == m && i == n-1) break;
            if(k == m) {
                k--;
                grid[k][i] = '.';
            } else {
                grid[k][i] = '.';
            }
        }
        return grid;
    }
};