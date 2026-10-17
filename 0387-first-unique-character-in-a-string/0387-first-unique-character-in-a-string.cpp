class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        for(int i = 0 ; i < s.length() ; i++) {
            m[s[i]]++;
        }

        int idx;
        int mini = INT_MAX;

        for(auto it : m) {
            if(it.second == 1) {
                char c = it.first;
                idx = s.find(c);
                mini = min(mini , idx);
            }
        }

        if(mini != INT_MAX) return mini;
        else return -1;
    }
};