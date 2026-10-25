class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.length();
        int i = 0;
        vector<int> v;
        unordered_map<char,int> mp1 , mp2;

        for(auto c : p) mp2[c]++;

        for(int j = 0 ; j < k ; j++) {
            mp1[s[j]]++;
        }

        if(mp1 == mp2) v.push_back(i);

        for(int j = k ; j < s.length() ; j++) {
            mp1[s[j]]++;
            mp1[s[i]]--;
            if(mp1[s[i]] == 0) mp1.erase(s[i]);
            i++;

            if(mp1 == mp2) v.push_back(i);
        }

        return v;
    }
};