class Solution {
public:
int check(vector<int>& nums , int L, int R){
    int p = nums[L];
    int i = L+1, j = R;
    while(i <= j){
        if(nums[i] < p && nums[j] > p){
            swap(nums[i], nums[j]);
            i++,j--;
        }if(nums[i] >= p)
        i++;
        if(nums[j] <= p){
            j--;
        }
    }
    swap(nums[L], nums[j]);
    return j;
}
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
      
int pivot_idx;
        int L = 0, R = n-1;
        while(true){
             pivot_idx = check(nums, L, R);
            if(pivot_idx == k-1){
break;
            }else if(pivot_idx < k-1){
                L = pivot_idx+1;

            }else{
                R = pivot_idx-1;
            }
        }
        return nums[pivot_idx];
    }
};