class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        int n = s.length();
        int no_of_words = words.size();
        int m = words[0].size();

        if(n < no_of_words * m) return ans;
        unordered_map<string,int> mp;

        for(auto t : words) mp[t]++;

        for(int i = 0 ; i < m ; i++) {
            unordered_map<string,int> temp;
            int count = 0 , left = i;
            for(int j = i ; j+m <= n ; j+=m) {
                string k = s.substr(j , m);
                if(!mp.count(k)) {
                    count = 0;
                    temp.clear();
                    left = j+m;
                    continue;
                }

                temp[k]++;
                count++;

                while(temp[k] > mp[k]) {
                    temp[s.substr(left , m)]--;
                    count--;
                    left += m;
                }
                if(count == no_of_words) {
                    ans.push_back(left);
                    temp[s.substr(left,m)]--;
                    count--;
                    left += m;
                }
            }
        }
        return ans;
    }
};