class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ct = 0;
        int ans = 0;
        int i = 0;

        while(i < nums.size()) {
            if(nums[i] == 1) {
                ct++;
                i++;
            } else {
                ct = 0;
                i++;
            }

            ans = max(ans,ct);
        }

        return ans;
    }
};