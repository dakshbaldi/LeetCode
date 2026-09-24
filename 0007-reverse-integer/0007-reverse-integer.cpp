class Solution {
public:
    int reverse(int x) {
        long long reverseNum = 0;
        while(x !=  0) {
            int lastDigit = x % 10;
            x /= 10;
            reverseNum = (reverseNum * 10) + lastDigit;
        }
         if(reverseNum > INT_MAX || reverseNum < INT_MIN) return 0;
         return reverseNum;
    
    }
};