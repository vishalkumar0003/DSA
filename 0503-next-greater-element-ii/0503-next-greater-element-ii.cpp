class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> arr1;
        arr1 = nums;
        for(int i =0 ;i < nums.size();i++)
        arr1.push_back(nums[i]);
        vector<int> nums1(arr1.size(), -1);
        for(int i = 0;i < arr1.size();i++){
            while(!st.empty() && arr1[st.top()] < arr1[i]){
                nums1[st.top()] = arr1[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int> ans;
        for(int i =0;i < nums.size();i++)
        ans.push_back(nums1[i]);
        return ans;
    }
};