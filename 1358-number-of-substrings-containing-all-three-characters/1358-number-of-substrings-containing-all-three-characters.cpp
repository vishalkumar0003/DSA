class Solution {
public:
    int numberOfSubstrings(string s) {
        int right, LastA = -1, LastB = -1, LastC = -1,minLast = -1,ans = 0;
        for(right = 0;right < s.size();right++){
            if(s[right] == 'a')
            LastA = right;
            else if(s[right] == 'b')
            LastB = right;
            else 
            LastC = right;
            minLast = min({LastA, LastB, LastC});
            if(minLast != -1)
            ans += minLast+1;
        }
        return ans;
    }
};