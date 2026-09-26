class Solution {
public:
int findans(vector<int>& nums, int k){
    int ans =0, left = 0, right,count = 0;
        for(right = 0; right < nums.size();right++){
            if(nums[right]%2 == 1)
            count++;
            while(count > k){
                if(nums[left]%2 == 1)
                count--;
                left++;
            }
            ans = ans+ (right-left+1);
        }
        return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return findans(nums, k)-findans(nums,k-1);
    }
};