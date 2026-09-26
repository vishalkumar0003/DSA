class Solution {
public:
    int numberOfSubstrings(string s) {
        int right, ans = 0,LastA = -1, LastB = -1, LastC = -1,minlast;
        for(right = 0; right <s.size();right++){
            if(s[right] == 'a')
            LastA = right;
            else if(s[right] == 'b')
            LastB = right;
            else
            LastC = right;
            minlast = min({LastA, LastB, LastC});
            if(minlast != -1)
            ans += minlast + 1;
        }
        return ans;
    }
};