class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        int target1 , i1, j;
        int  n = nums.size();
       sort(nums.begin(), nums.end());
          vector<vector<int>> v;
        for(int i = 0;i < n;i++){
             if(i > 0 && nums[i] == nums[i-1]) continue;
            i1 = i+1;
            j = n-1;
            target1  = target  - nums[i];
            while(i1 < j){
                if(target1 == (nums[i1]+ nums[j])){
                    vector<int> arr;
                        arr.push_back(nums[i]);
                        arr.push_back(nums[i1]);
                        arr.push_back(nums[j]);
                        v.push_back(arr);
                        while(i1 < j && nums[i1] == nums[i1+1]) i1++;
                    while(i1 < j && nums[j] == nums[j-1]) j--;
                        i1++, j--;

                }
                else if(target1 < (nums[i1]+ nums[j])){
                    j--;
                }
                else{
                    i1++;
                }
            }
        }
        return v;
        
    }
};