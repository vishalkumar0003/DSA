class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0 , left = 0, right;
        unordered_set<int>st;
        for(right = 0; right < s.size();right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};