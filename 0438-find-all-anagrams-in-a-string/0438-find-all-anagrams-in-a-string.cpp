class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size() > s.size())
        return ans;
        vector<int> freqS(26,0);
        vector<int> freqP(26,0);
        for(int i = 0; i< p.size();i++){
            freqP[p[i]-'a']++;
        }
        int n = p.size();
        for(int right = 0;right < s.size();right++){
            freqS[s[right]-'a']++;
            if(right >= n){
                freqS[s[right-n]-'a']--;
            }
            if(freqS == freqP){
                ans.push_back(right-n+1);
            }
        }
        return ans;
    }
};