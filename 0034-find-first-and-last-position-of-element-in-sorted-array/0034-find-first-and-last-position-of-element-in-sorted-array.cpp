class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1, mid,ans = -1, ans1 = -1;
        while(i <= j){
            mid = (i+j)/2;
            if(nums[mid] == target){
                
                ans = mid;
                j = mid-1;
            }
            else if(nums[mid] > target)
            j  = mid-1;
            else
            i = mid+1;
        }
        int i1 = 0, j1 = nums.size()-1,mid1;
        while(i1 <= j1){
            mid1 = (i1+j1)/2;
            if(nums[mid1] == target){
                ans1 = mid1;
                i1 = mid1+1;
                
            }else if(nums[mid1] > target){
                j1 = mid1-1;
            }else
            i1 = mid1+1;
        }
        return {ans,ans1};
    }
};