class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = s.length()-1 ; i>= 0 ; i--) { 
            if(isspace(s[i])) {
                s.erase(s.begin()+i);
            } else {
                break;
            }
        }

        for(int i = 0 ; i < s.length() ; i++) {
            count++;
            if(isspace(s[i])) {
                count = 0;
            }
        }
        return count;
    }
};