class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> s;
        int ans;
        for(int i = 0 ; i < nums.size() ; i++) {
            s.insert(nums[i]);
        }

        for(int i = 0 ; i <= nums.size() ; i++) {
            if(s.find(i) == s.end()) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};