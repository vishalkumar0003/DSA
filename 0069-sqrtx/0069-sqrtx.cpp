class Solution {
public:
    int mySqrt(int x) {
        if(x == 1 || x == 0)
        return x;
        int s = 1 , e = x/2,ans =-1;
        long long mid;
        while(s <= e){
            mid = (s+e)/2;
            long long t = mid*mid;
            if(t == x){
            ans = mid;
            break;
            }
            else if(t < x){
                ans = mid;
                s = mid+1;
            }else
            e = mid-1;
        }
        return ans;
    }
};