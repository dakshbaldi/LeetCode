class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = i+1;

        while(j < n) {
            if(nums[i]+nums[j] == target) {
                break;
            } else {
                j++;
            }

            if(j == n) {
                i++;
                j = i+1;
            }
        }
        return {i , j};
    }
};