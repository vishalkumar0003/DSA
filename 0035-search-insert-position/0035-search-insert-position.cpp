class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1,mid,ans = -1;;
        while(i  <= j){
            mid = (i+j)/2;
            if(nums[mid] == target)
            return mid;
            else if(nums[mid] > target){
                ans = mid;
                j = mid-1;
            }
            else
            i = mid+1;
        }
        if(ans == -1)
        return nums.size();
        return ans;
    }
};