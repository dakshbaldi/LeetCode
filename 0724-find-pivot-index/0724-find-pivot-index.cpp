class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        vector<int> temp(nums.size());
        for(int i = 0 ; i < nums.size() ; i++) {
            temp[i] = leftSum;
            leftSum += nums[i];
        }
        int rightSum = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            int rightSum = leftSum - temp[i] - nums[i];
            if(rightSum == temp[i]) return i;
        }
        return -1;
    }
};