class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0;
        while(i < nums1.size()) {
            int j = 0;
            while(j < nums2.size()) {
                if(nums1[i] == nums2[j]) break;
                else j++;
            }

            while(j <= nums2.size()) {
                j++;
                if(j != nums2.size()) {
                    if(nums1[i] < nums2[j]) {
                       ans.push_back(nums2[j]);
                       break;
                    } else {
                        continue;
                    }
                } else {
                    ans.push_back(-1);
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};