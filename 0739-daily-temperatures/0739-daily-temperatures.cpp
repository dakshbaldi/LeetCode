class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        stack<int> sk;

        for(int i = 0 ; i < n ; i++) {
            bool ok = false;
            if(sk.empty()) {
                sk.push(i);
                continue;
            }

            if(temperatures[i] > temperatures[sk.top()]) {
                ans[sk.top()] = i-sk.top();
                sk.pop();
            }

            if(sk.empty() || temperatures[i] <= temperatures[sk.top()]) {
                sk.push(i);
                ok = true;
            }

            if(ok == false) {
                i--;
                continue;
            }

        }
        return ans;
    }
};