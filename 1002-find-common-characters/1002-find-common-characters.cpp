class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26 , INT_MAX);

        for(auto &w : words) {
            vector<int> cnt(26 , 0);
            for(auto c : w) {
                cnt[c-'a']++;
            }
            for(int i = 0 ; i < 26 ; i++) {
                minFreq[i] = min(minFreq[i] , cnt[i]);
            }
        }

        vector<string> ans;
        for(int i = 0 ; i < 26 ; i++) {
            for(int k = 0 ; k < minFreq[i] ; k++) {
                ans.push_back(string(1 , i+'a'));
            }
        }
        return ans;
    }
};