class Solution {
public:
int find(vector<int> nums, int k){
    int right, left = 0,ans = 0, oddcount= 0;
    for(right = 0; right < nums.size();right++){
        if(nums[right]%2 == 1)
        oddcount++;
        while(oddcount > k){
            if(nums[left]%2 == 1)
            oddcount--;
            left++;
        }
        ans = ans + (right-left+1);
    }
    return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return find(nums, k)- find(nums,k-1);
    }
};