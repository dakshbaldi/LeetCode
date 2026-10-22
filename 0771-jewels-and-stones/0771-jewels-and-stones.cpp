class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ct = 0;
        for(auto c : stones) {
            if(jewels.find(c) != string::npos) {
                ct++;
            } else {
                continue;
            }
        }
        return ct;
    }
};