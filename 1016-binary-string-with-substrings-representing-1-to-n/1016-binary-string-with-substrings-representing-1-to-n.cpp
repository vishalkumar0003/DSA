class Solution {
public:
    bool queryString(string s, int n) {
        int size = s.size();
        for(int i = 1;i <= n;i++){
            string binary = "";
            int num = i;
            while(num > 0){
                int rem = num%2;
                num = num/2;
                binary = to_string(rem)+ binary;
            }
            if(s.find(binary) == string::npos)
            return false;
        }
        return true;
    }
};