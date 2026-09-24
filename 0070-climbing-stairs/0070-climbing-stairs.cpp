class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
        return n;
        int a = 1,b = 2,next = 2;
        for(int i = 0;i < n-2;i++){
int temp = b;
next = a+b;
b = next;
a = temp;
        }
        return next;
    }
};