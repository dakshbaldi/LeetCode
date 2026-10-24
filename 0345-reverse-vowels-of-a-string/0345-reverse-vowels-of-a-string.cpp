class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int n = s.length();
        int left = 0;
        int right = n-1;

        while(left <= right) {
            bool ok = true;

            if(vowels.find(s[left]) == string::npos) {
                left++;
                ok = false;
            } 

            if(vowels.find(s[right]) == string::npos) {
                right--;
                ok = false;
            }

            if(ok) {
                swap(s[left] , s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};