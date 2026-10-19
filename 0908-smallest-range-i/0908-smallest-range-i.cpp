class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int m = nums[0];
        int M = nums[0];
        for(int i = 1 ; i < nums.size() ; i++) {
            m = min(m , nums[i]);
        }

        for(int i = 1 ; i < nums.size() ; i++) {
            M = max(M , nums[i]);
        }

        int score;
        int ans = INT_MAX;
        int p = 0;

        while(p <= k) {
            for(int i = 0 ; i <= k ; i++) {
                score = (M-i) - (m+p);
                score = abs(score);
                ans = min(ans,score);
            }
            p++;
        }
        return ans;
    }
};