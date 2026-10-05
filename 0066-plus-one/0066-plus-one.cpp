class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0, n = digits.size() ,sum = 0;
        digits[n-1] += 1;
        reverse(digits.begin(), digits.end());
        
        for(int i = 0;i < n;i++){
            sum = digits[i]+carry;
            digits[i] = sum%10;
            carry = sum/10;
        }
        while(carry){
digits.push_back(carry%10);
carry = carry/10;

        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};