class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int min1 = 1;
int max1 = *max_element(nums.begin(), nums.end());
        int low = min1, high = max1;
        int ans;
        while(low <= high){
           int mid = low + (high - low) / 2;
            long long sum = 0;
            for(int i = 0;i < nums.size();i++){
                sum += ceil((double)nums[i] / mid);
                if(sum > threshold)
                break;
            }
            if(sum <= threshold){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;

            }
        }
        return ans;
    }
};