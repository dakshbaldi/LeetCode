class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string k = strs[0];
        for(int i = 1 ; i < strs.size() ; i++) {
            if(strs[i].length() < k.length()) k = strs[i];
        }

        queue<char> q;
        for(int i = 0 ; i < k.length() ; i++) {
            q.push(k[i]);
        }

        for(int i = 0 ; i < strs.size() ; i++) {
            queue<char> temp;
            for(int j = 0 ; j < k.length() ; j++) {
                if(strs[i][j] == k[j]) {
                    temp.push(k[j]);
                } else {
                    break;
                }
            }
            if(temp.size() <= q.size()) q = temp;
        }
        string ans;
        while(!q.empty()) {
            ans += q.front();
            q.pop();
        }

        return ans;
    }
};