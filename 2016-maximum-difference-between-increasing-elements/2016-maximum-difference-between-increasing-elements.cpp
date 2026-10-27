class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxDiff = -1;
        for(int i = 0 ; i < n-1 ; i++) {
            int mn = nums[i];
            int mx = *max_element(nums.begin()+i+1 , nums.end());
            int diff = mx-mn;
            if(diff > 0) maxDiff = max(diff , maxDiff);
        }

        return maxDiff;
        
    }
};