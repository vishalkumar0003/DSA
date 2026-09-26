class Solution {
public:
int findans(vector<int>& arr, int goal){
    if(goal < 0)
    return 0;
    int left = 0, right , count = 0,sum = 0;
    for(right = 0; right < arr.size();right++){
        sum += arr[right];
        while(sum > goal){
            sum = sum- arr[left];
            left++;
        }
        count = count + (right-left+1);
    }
    return count;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return findans(nums, goal)- findans(nums, goal-1);
    }
};