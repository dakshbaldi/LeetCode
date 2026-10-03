class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>copy = nums;
        sort(copy.begin(), copy.end());

      if(nums == copy) return true;

      reverse(copy.begin(), copy.end());

      if(nums == copy) return true;

      return false;

    }
};