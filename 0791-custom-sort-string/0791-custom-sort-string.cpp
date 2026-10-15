class Solution {
public:
    string customSortString(string order, string s) {
        int i = 0;
        int l1 = 0 , l2 = 0;
        while(i < s.length() && l1 < order.length()) {
            
            if(order[l1] == s[i]) {
                swap(s[l2],s[i]);
                l2++;
                i = l2;
                while(i <= s.length()) {
                    if(order[l1] == s[i]) {
                        swap(s[l2],s[i]);
                        l2++;
                        i = l2;
                    } else {
                        i++;
                    }
                }
                i = l2;
                l1++;
            } else {
                i++;
            }
            if(i-1==(s.length()-1) &&order[l1] != s[i-1]) {
                l1++;
                i = l2;
            }
        }
        return s;
    }
};