class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1 , s2;
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();

        for(int i = 0 ; i < n ; i++) {
            s1.insert(nums1[i]);
        }

        for(int i = 0 ; i < m ; i++) {
            s2.insert(nums2[i]);
        }

        for(auto s : s1) {
            mp[s]++;
        }

        for(auto s : s2) {
            mp[s]++;
        }

        for(auto it : mp) {
            if(it.second > 1) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};