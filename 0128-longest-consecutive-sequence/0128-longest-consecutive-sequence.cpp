class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin() , nums.end());
        int maxi = 0;

        for(auto num : s) {
            int count = 1;
            int cur = num;

            if(s.find(cur-1) != s.end()) {
                continue;
            }

            while(s.find(cur+1) != s.end()) {
                cur++;
                count++;
            }

            maxi = max(maxi , count);
        }
        return maxi;
    }
};