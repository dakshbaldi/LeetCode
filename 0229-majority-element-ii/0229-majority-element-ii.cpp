class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int k = n/3;
        unordered_map<int,int> mp;
        vector<int> ans;

        for(auto n : nums) mp[n]++;

        for(auto it : mp) {
            if(it.second > k) ans.push_back(it.first);
        }
        return ans;
    }
};