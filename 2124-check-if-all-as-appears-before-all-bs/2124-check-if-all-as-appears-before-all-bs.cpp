class Solution {
public:
    bool checkString(string s) {
        string k = s;
        sort(k.begin() , k.end());
        if(s == k) return true;
        return false;
    }
};