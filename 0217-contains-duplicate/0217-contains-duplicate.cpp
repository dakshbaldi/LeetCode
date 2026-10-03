class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int k = nums[0];
        int i = 0;
        for(int j = 1 ; j < nums.size() ; j++) {
            if(nums[j] == k) {
                return true;
                break;
            } else {
                k = nums[j];
            }
        }
        return false;
    }
};