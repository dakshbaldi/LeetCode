class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int ans = 0;
        bool ok = true;

        for(int i = 0 ; i < n ; i++) {
            ok = true;
            for(int j = 0 ; j < m ; j++) {
                if(abs(arr1[i]-arr2[j]) <= d) ok = false;
            }
            if(ok) ans++;
        }
        return ans;
    }
};