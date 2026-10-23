class Solution {
public:
    int secondHighest(string s) {
        set<int> st;
        for(auto c : s) {
            if(!isalpha(c)) {
                st.insert(c - '0');
            } else {
                continue;
            }
        }
        int ans = -1;
        if(st.size() == 1 || st.size() == 0) return ans;
        auto it = std::next(st.begin() , st.size()-2);
        ans = *it;
        return ans;
    }
};