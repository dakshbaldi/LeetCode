class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int len = 0;

        for(int i = 0 ; i < s.length() ; i++) {
            for(int j = i ; j < s.length() ; j++) {
                if(j-i+1 <= len) continue;

                int l = i , r = j;
                bool isPal = true;
                while(l < r) {
                    if(s[l] != s[r]) {
                        isPal = false;
                        break;
                    }
                    l++ , r--;
                }
                if(isPal) {
                    len = j-i+1;
                    ans = s.substr(i , len);
                }
            }
        }
        return ans;
    }
};