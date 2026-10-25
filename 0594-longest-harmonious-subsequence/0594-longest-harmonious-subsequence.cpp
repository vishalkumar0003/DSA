class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i =0 ;i <nums.size();i++){
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto i: mp){
            if(mp.count(i.first+1)){
                ans = max(ans, i.second + mp[i.first + 1]);
            }
        }
        return ans;
    }
};