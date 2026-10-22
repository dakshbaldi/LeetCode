class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto val : nums) mp[val]++;

        vector<int> ans;

        for(int i = 1 ; i <= nums.size() ;i++) {
            if(mp.find(i) != mp.end()) {
                continue;
            } else {
                ans.push_back(i);
                continue;
            }
        }
        return ans;
    }
};