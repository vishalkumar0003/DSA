class Solution {
public:
    string baseNeg2(int n) {
        string s = "";
        if(n == 0)
        return "0";
        while(n != 0){
            int rem = n%(-2);
            n = n/(-2);
            if(rem < 0){
                rem = rem + 2;
                n = n + 1;

            }
            s = s + to_string(rem);
        }
     reverse(s.begin(), s.end());
     return s;
    }
};