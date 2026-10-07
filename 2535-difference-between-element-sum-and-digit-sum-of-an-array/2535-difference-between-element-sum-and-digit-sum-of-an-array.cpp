class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0,ans = 0;
        for(int i = 0;i < nums.size();i++){
            sum = sum + nums[i];
            int n = nums[i];
            while(n){
                int rem = n%10;
                ans = ans + rem;
                n= n/10;
            }
        }
        if(ans > sum)
        return ans-sum;
        return sum-ans;
    }
};