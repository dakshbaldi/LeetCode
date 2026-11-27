class Solution {
public:
    string generateTheString(int n) {
        string ans = "";

        if(n%2 != 0) {
            while(n--) {
                ans += 'a';
            }
        } else {
            ans += 'a';
            n--;
            while(n--) {
                ans += 'b';
            }
        }
        return ans;
    }
};