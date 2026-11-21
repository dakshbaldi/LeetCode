class Solution {
public:

void subsets(int index , set<vector<int>> &ans , vector<int> &curr , vector<int>& nums) {
    if(index == nums.size()) {
        ans.insert(curr);
        return;
    }

    curr.push_back(nums[index]);
    subsets(index+1 , ans , curr , nums);
    curr.pop_back();
    subsets(index+1 , ans , curr , nums);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        vector<int> curr;

        subsets(0 , ans , curr , nums);

        return vector<vector<int>>(ans.begin(),ans.end());
    }
};