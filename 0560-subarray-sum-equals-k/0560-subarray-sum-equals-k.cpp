class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            int sum = nums[i];
            for(int j = i ; j < nums.size() ; j++) {
                if(i != j) {
                    sum += nums[j];
                }

                if(sum == k) {
                    count++;
                }
            }
        }
        return count;
    }
};