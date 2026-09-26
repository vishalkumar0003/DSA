class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0, left = 0, right,zeroes = 0;
        for(right = 0; right < nums.size();right++){
            if(nums[right] == 0)
            zeroes++;
            while(zeroes > k){
                if(nums[left] == 0)
                zeroes--;
                left++;
            }
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};