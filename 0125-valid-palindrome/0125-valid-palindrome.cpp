class Solution {
public:
    bool isPalindrome(string s) {
        string temp1 = "";

        for(auto &c : s) {
            if(isalnum(c)) {
                temp1 += c;
            }
        }

        for(auto &c : temp1) {
            c = tolower(c);
        }
        string temp2 = temp1;
        int n = temp1.length();
        for(int i = 0 ; i < n/2 ; i++) {
            swap(temp2[i], temp2[n - i - 1]);
        }

        if(temp2 == temp1) return true;
        else return false;
    }
};