class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);

        for(int i =0 ; i < n ; i++) {
            if((i+1)%3 == 0 && (i+1)%5 != 0) {
                ans[i] = "Fizz";
                continue;
            } 

            if((i+1)%3 == 0 && (i+1)%5 == 0) {
                ans[i] = "FizzBuzz";
                continue;
            }

            if((i+1)%5 == 0) {
                ans[i] = "Buzz";
                continue;
            }

            int n = i+1;
            ans[i] = to_string(n);

        }
        return ans;
    }
};