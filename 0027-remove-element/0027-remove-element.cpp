class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n == 0)
        return 0;

        int i = 0, j = n-1;
        while(i < j){
            if(nums[j] == val)
            j--;
            else if(nums[i] == val){
                swap(nums[i], nums[j]);
                i++,j--;

            }else{
                i++;
            }
        }
        int e = n-1;
        while(e>=0 && nums[e] == val){
            nums.pop_back();
            e--;
        }
        return nums.size();
    }
};