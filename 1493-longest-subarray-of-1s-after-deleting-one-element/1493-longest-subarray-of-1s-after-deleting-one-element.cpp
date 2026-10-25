class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int right , left = 0,ans = 0,countZero= 0;
        for(right = 0; right < nums.size();right++){
            if(nums[right] == 0)
            countZero++;
            while(countZero > 1){
                if(nums[left] == 0)
                countZero--;
                left++;
            }
            ans = max(ans,right-left);
        }
        return ans;
    }
};