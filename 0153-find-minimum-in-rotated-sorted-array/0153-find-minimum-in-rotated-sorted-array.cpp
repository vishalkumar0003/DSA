class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1, ans = 0, mid;
        while(start <= end){
            mid = (start+end)/2;
            if(nums[mid] < nums[0]){
            ans = mid;
            end =mid-1;
            }
            else{
            start = mid+1;
            }
        }
        return nums[ans];
    }
};