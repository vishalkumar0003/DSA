class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum =0 ;
        for(int i = 0;i < k;i++){
            sum += nums[i];

        }
        double ans = sum/k,avg;
        for(int i = k;i < nums.size();i++){
            sum = sum - nums[i-k] + nums[i];
            avg = sum/k;
            ans = max(ans, avg);
        }
        return ans;
    }
};