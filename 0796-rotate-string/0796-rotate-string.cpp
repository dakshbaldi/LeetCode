class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        int n = s.length() -  1;

        while(n--) {
            s.push_back(s[0]);
            s.erase(s.begin());
            if(s == goal) return true;
        }
        return false;
    }
};