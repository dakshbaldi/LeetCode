class Solution {
public:
    vector<int> diStringMatch(string s) {
        int left = 0;
        int right = s.length();
        vector<int> ans;

        for(auto c : s) {
            if(c == 'I') {
                ans.push_back(left);
                left++;
            } else {
                ans.push_back(right);
                right--;
            }
        }
        if(s[s.length()-1] == 'I') ans.push_back(right);
         else ans.push_back(left);

        return ans;
    }
};