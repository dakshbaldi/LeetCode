class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        string t = "" , ans = "";

        for(int i = 0 ; i < s.length() ; i++) {
            char c = s[i];
            if(isspace(c) || i == s.length()-1) {
                if(i == s.length()-1) {
                    t += c;
                }
                vec.push_back(t);
                t = "";
                continue;
            }
            t += c;

        }

        for(auto &v : vec) {
            reverse(v.begin() , v.end());
            ans += v;
            ans += " ";
        }

        ans.erase(ans.end()-1);
        return ans;
    }
};