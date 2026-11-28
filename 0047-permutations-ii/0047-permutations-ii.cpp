class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp = nums;
        set<vector<int>> st;
        st.insert(nums);
        next_permutation(nums.begin() , nums.end());
        

        while(nums != temp) {
            st.insert(nums);
            next_permutation(nums.begin() , nums.end());
        }

        return vector<vector<int>> (st.begin(),st.end());
    }
};