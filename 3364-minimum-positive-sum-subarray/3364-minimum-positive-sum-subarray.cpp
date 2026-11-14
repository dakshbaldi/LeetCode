class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;

        for(int i = l ; i <= r ; i++) {
            for(int j = 0 ; j+i <= nums.size() ; j++) {
                int sum = accumulate(nums.begin()+j , nums.begin()+j+i, 0);
                if(sum > 0) minSum = min(minSum , sum);
            }
        }

        return minSum == INT_MAX ? -1 : minSum;
    }
};