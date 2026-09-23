class Solution {
public:
    bool isPalindrome(int x) 
    {

        if(x==0) return true;
        int k =x;
        long long rev=0;
        if(x>0) {
            while(k>0){
                rev = rev*10 +(k%10);
                k /=10;
                if(rev>INT_MAX) return 0;           }
        }
        else return false;

        if(x==rev) return true;
        else return false;
    }
};