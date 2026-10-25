class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int total = 0, count = 0;
        for(int j = 2;j < nums.size();j++){
            if(nums[j]-nums[j-1] == nums[j-1]-nums[j-2]){
                count++;
                total += count;
            }
            else
            count = 0;
        }
        return total;
    }
};