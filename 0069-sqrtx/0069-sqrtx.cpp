class Solution {
public:
    int mySqrt(int x) {
        if(x == 1)
        return 1;
        int s = 1, e = x/2, ans;
        long long mid;
        while(s <= e){
            mid = (s+e)/2;
            long long t = mid*mid;
            if(t == x){
                return mid;
            }
            else if(t < x)
            {
                ans = mid; 
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
};