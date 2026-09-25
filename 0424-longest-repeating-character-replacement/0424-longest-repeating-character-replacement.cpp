class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right, ans = 0, maxfreq = 0;
        vector<int> hash(26, 0);
        for(right = 0; right < s.size();right++){
            hash[s[right]-'A']++;
            maxfreq = max(maxfreq, hash[s[right]-'A']);
            while((right-left+1)-maxfreq  > k){
                hash[s[left]-'A']--;
                left++;
            }
            ans = max(ans , right-left+1);
        }
        return ans;
    }
};