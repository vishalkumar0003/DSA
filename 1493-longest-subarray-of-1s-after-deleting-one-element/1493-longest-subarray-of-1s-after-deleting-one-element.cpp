class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int result = 0, countZero = 0,i = 0, max1 = 0;
        for(int j =0 ;j < nums.size();j++){
            if(nums[j] == 0)
            countZero++;
            while(countZero > 1){
                if(nums[i] == 0)
                countZero--;
                i++;
            }
            max1 = max(max1, j-i);
        }
        return max1;
    }
};