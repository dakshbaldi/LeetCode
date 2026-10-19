class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int i = 0 , j = 0;
        unordered_map<char,int> mp;
        int ans = 1;
        mp[s[i]]++;

        while(j < s.length()-1) {
            j++;

            while(mp[s[j]] > 0) {
                mp[s[i]]--;
                i++;
            }

            mp[s[j]]++;
            ans = max(ans , j-i+1);
        }
        return ans;
    }
};