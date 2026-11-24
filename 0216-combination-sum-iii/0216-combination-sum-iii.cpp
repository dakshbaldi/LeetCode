class Solution {
public:

void comb(int index , int n , int k , vector<vector<int>>& ans , vector<int>& curr , vector<int>& nums) {
    if(index == nums.size() || curr.size() == k) {
        if(n == 0 && curr.size() == k) {
            ans.push_back(curr);
        }
        return;
    }

    if(nums[index] <= n) {
        curr.push_back(nums[index]);
        comb(index+1 , n-nums[index] , k , ans , curr , nums);
        curr.pop_back();
    }

    comb(index+1 , n , k , ans , curr , nums);
}


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums(9 , 0);
        for(int i = 0 ; i < 9 ; i++) nums[i] = i+1;
        vector<vector<int>> ans;
        vector<int> curr;

        comb(0 , n , k , ans , curr , nums);
        return ans;
    }
};