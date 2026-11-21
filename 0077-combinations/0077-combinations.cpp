class Solution {
public:

void comb(int index , int k , vector<vector<int>> &ans , vector<int> &curr , vector<int> &nums) {
    if(curr.size() == k) {
        ans.push_back(curr);
        return;
    }

    if(index == nums.size()) return;

    curr.push_back(nums[index]);
    comb(index+1 , k , ans , curr , nums);
    curr.pop_back();
    comb(index+1 , k , ans , curr , nums);
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n , 0);

        for(int i = 0 ; i < n ; i++) nums[i] = i+1;
        vector<vector<int>> ans;
        vector<int> curr;

        comb(0 , k , ans , curr , nums);

        return ans;
    }
};