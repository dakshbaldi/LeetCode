class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
	int ct =0;
    for(int i=0; i<s.size()-2; i++){
        string k = s.substr(i,3);
        unordered_map<char , int> freq;
        for(char ax : k) freq[ax]++;
        bool good = true;
        for(auto &p : freq){
            if(p.second >= 2){
                good = false; break;
            }
        }
        if(good ==true) ct++;
    }
    return ct;
    }
};