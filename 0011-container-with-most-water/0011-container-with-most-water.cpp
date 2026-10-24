class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0 , right = n-1;
        int maxArea = 0;

        while(left < right) {
            int area = (right-left) * (min(height[left],height[right]));
            maxArea = max(maxArea , area);

            if(height[left] < height[right]) {
                left++;
                continue;
            } else if(height[left] == height[right]) {
                if(height[left+1] > height[right-1]) {
                    left++;
                    continue;
                } else if(height[left+1] < height[right-1]) {
                    right--;
                    continue;
                } else {
                    left++;
                    right--;
                    continue;
                } 
            } else {
                right--;
                continue;
            }
        }
        return maxArea;
    }
};