class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0 , j = 1;
        int sum = 0;
        while(j < nums.size()) {
            sum += min(nums[i] , nums[j]);
            j += 2;
            i = j-1;
        }
        return sum;
    }
};