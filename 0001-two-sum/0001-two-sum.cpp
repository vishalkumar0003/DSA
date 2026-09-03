class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  map<int,int>mp;
  int left_ele;
  for(int i = 0;i < nums.size();i++){
    left_ele = target - nums[i];
    if(mp.count(left_ele)){
        return {mp[left_ele], i};

    }
    mp[nums[i]] = i;
  }return {};

    }
};