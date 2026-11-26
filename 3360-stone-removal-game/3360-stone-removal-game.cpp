class Solution {
public:
    bool canAliceWin(int n) {
        int k = 10;
        n -= k;

        while(n > 0) {
            k--;
            n -= k;
            if(n == 0) return false;
            if(n < 0) return true;
            k--;
            n -= k;
            if(n == 0) return true;
            if(n < 0) return false;
        }
        if(n == 0) return true;
        return false;
    }
};