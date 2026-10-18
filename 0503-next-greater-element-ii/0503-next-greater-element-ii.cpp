class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nge;
        int i = 0;
        int j = 1;

        while(i < nums.size()) {
            if(j == nums.size()) {
                j = 0;
                continue;
            }

            if(j == i) {
                nge.push_back(-1);
                i++;
                j = i+1;
                continue;
            }

            if(nums[j] > nums[i]) {
                nge.push_back(nums[j]);
                i++;
                j = i+1;
                continue;
            } else {
                j++;
                continue;
            }
        }
        return nge;
    }
};