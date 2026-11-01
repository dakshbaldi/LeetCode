class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixSum(n+1 , 0);

        for(int i = 0 ; i < n ; i++) {
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
        int i = 0 , j = 1;
        int lnt = INT_MAX;
        while(j <= n) {
            int diff = prefixSum[j]-prefixSum[i];
            if(diff == target) {
                lnt = min(lnt , j-i);
                j++;
                if(j == n+1) break;
            } else if(diff > target) {
                lnt = min(lnt ,j-i);
                i++;
            } else {
                j++;
                if(j == n+1) break;
            }
        }
        if(lnt == INT_MAX) return 0;
        return lnt;
    }
};