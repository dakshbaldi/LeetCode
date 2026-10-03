class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int count = 1 , maxCount = 0;
        int str = 0;
        int majority = nums[0];

        while(str < nums.size() - 1) {
            if(nums[str] == nums[str + 1]) {
                str++;
                count++;
            } else {
                count = 1;
                str++;
            }

            if(count > maxCount) {
                maxCount = count;
                majority = nums[str];
            }
        }
        return majority;
    }
};