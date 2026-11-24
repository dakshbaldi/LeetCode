class Solution {
public:
    int maxLength(vector<int>& nums) {
        int len = INT_MIN;

        for(int i = 0 ; i < nums.size() ; i++) {
            long long prod = 1;
            long long lm = 1;
            long long gd = 0;
            for(int j = i ; j < nums.size() ; j++) {
                if(prod > 25200) break;
                prod *= nums[j];
                lm = lcm(lm , (long long)nums[j]);
                gd = gcd(gd , (long long)nums[j]);

                if(prod == lm*gd) {
                    len = max(len , j-i+1);
                }
            }
        }
        return len;
    }
};