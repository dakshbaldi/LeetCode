class Solution {
public:

    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> hashA(n+1 , 0);
        vector<int> hashB(n+1 , 0);
        vector<int> ans(n ,0);

        for(int i = 0 ; i < n ; i++) {
            hashA[A[i]]++;
            hashB[B[i]]++;

            int ct = 0;
            for(int i = 0 ; i <= n ; i++) {
                if(hashA[i] == 1 && hashB[i] == 1) ct++;
            }

            ans[i] = ct;
        }

        return ans;
    }
};