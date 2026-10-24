class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        int n = s.length();
        int last = n-1;

        while(i < n) {
            if(last-i+1 >= 2*k) {
                reverse(s.begin()+i , s.begin()+i+k);
                i += 2*k;
            } else if(last-i+1 >= k && last-i+1 < 2*k) {
                reverse(s.begin()+i , s.begin()+i+k);
                break;
            } else if(last-i+1 < k) {
                reverse(s.begin()+i , s.end());
                break;
            }
        }
        return s;
    }
};