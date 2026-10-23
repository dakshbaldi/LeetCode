class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans;
        if(haystack.find(needle) != string::npos) {
            ans = haystack.find(needle);
        } else {
            ans = -1;
        }
        return ans;
    }
};