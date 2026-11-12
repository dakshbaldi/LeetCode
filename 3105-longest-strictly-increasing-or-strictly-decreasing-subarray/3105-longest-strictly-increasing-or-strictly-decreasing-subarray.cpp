class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxlen = 1;
        int ans = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[i-1]) {
                ans++;
                maxlen = max(maxlen , ans);
            }
            else ans = 1;
        }

        ans = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[i-1]) {
                ans++;
                maxlen = max(maxlen , ans);
            }
            else ans = 1;
        }
        return maxlen;
    }
};