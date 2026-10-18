class Solution {
public:

    unordered_map<char,int> symbol = {{'(',-1} , {'{',-2} , {'[',-3} , {')',1} , {'}',2} , {']',3}};


    bool isValid(string s) {
        stack<char> st;

        for(auto &ch : s) {
            if(symbol[ch] < 0) {
                st.push(ch);
            } else {
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(symbol[top] + symbol[ch] != 0) return false;
            }
        }

        if(st.empty()) return true;
        return false;
    }
};