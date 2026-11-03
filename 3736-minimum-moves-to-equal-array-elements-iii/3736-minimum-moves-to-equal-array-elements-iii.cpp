class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0 ; i < n-1 ; i++) {
            ans += nums[n-1]-nums[i];
        }
        return ans;
    }
};