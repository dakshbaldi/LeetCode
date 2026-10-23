class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto val : nums) mp[val]++;
        
        int freq = 0;
        for(auto it : mp) {
            freq = max(freq , it.second);
        }

        vector<int> v;
        for(auto it : mp) {
            if(it.second == freq) v.push_back(it.first);
        }

        int n = v.size();
        int ans = INT_MAX;
        for(int i = 0 ; i < n ; i++) {
            int left = 0 , right = nums.size()-1;
            for(int j = 0 ; j < nums.size() ; j++) {
                if(nums[j] == v[i]) {
                    left = j;
                    break;
                }
            }

            for(int j = nums.size()-1 ; j >= 0 ; j--) {
                if(nums[j] == v[i]) {
                    right = j;
                    break;
                }
            }

            ans = min(ans , right-left+1);
        }
        return ans;
    }
};