class Solution {
public:
    vector<int> ans(vector<int> &nums , int k) {
        
            reverse(nums.begin(), nums.end());
            reverse(nums.begin() , nums.begin() + k);
            reverse(nums.begin() + k , nums.end());

        return nums;
    }
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        ans(nums , k);
    }
};