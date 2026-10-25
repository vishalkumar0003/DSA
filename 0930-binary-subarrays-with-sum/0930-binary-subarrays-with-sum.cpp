class Solution {
public:
int find(vector<int>& nums, int goal){
    if(goal < 0)
    return 0;
      int sum = 0, count = 0;
        int left = 0, right;
        for(right = 0; right < nums.size();right++){
            sum += nums[right];
            while(sum > goal){
                sum = sum - nums[left];
                left++;
            }
            count = count + (right-left+1);
        }
        return count;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
      return find(nums, goal)-find(nums, goal-1);
    }
};