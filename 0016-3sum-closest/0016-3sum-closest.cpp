class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int sum = nums[0]+nums[1]+nums[2];

        for(int i = 0 ; i < n-1 ; i++) {
            int left = i+1;
            int right = n-1;

            while(left < right) {
                int sm = nums[i]+nums[left]+nums[right];
                if(abs(target-sum) > abs(target-sm)) sum = sm;

                if(sm == target) return sm;
                else if(sm > target) right--;
                else left++;
            }
        }
        return sum;
    }
};