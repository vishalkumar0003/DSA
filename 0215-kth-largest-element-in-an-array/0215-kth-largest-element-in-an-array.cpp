class Solution {
public:
int find(vector<int>& nums, int L, int R ){
    int i = L+1, j = R, P = nums[L];
    while(i <= j)
    {
        if(nums[i] < P && nums[j] > P){
            swap(nums[i], nums[j]);
            i++,j--;
        }
        if(nums[i] >= P)
        i++;
        if(nums[j] <= P)
        j--;
    }
    swap(nums[L], nums[j]);
    return j;
}
    int findKthLargest(vector<int>& nums, int k) {
        int L = 0, R = nums.size()-1, pivot_idx;
        while(true){
            pivot_idx = find(nums, L,R);
            if(pivot_idx == k-1)
            return nums[pivot_idx];
            else if(pivot_idx < k-1)
            L = pivot_idx + 1;
            else 
            R = pivot_idx -1;
        }
        return -1;
    }
};