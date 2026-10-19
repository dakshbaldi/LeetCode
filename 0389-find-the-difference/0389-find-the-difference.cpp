class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp;
        char ans;

        for(auto c : s) {
            mp[c]++;
        }

        for(auto c : t) {
            mp[c]--;
        }

        for(auto it : mp) {
            if(it.second != 0) {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};