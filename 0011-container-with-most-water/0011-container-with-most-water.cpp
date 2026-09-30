class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1,h,w,area = 0, ans;
        while(left < right){
            h = min(height[left], height[right]);
            w = right-left;
            ans = h*w;
            area = max(area, ans);
            if(height[left] < height[right])
            left++;
            else
            right--;

        }
        return area;
    }
};