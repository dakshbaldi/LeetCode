class Solution {
public:

vector<int> row(int n) {
    vector<int> ans;
    long long res = 1;
    ans.push_back(res);
    for(int i = 1 ; i < n ; i++) {
        res *= (n-i);
        res /= i;
        ans.push_back(res);
    }
    return ans;
}


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas;
        for(int i = 1 ; i <= numRows ; i++) {
            pas.push_back(row(i));
        }
        return pas;
    }
};