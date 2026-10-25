class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0,count = 0,avg;
        for(int i = 0;i < k;i++){
            sum += arr[i];
        }
        if(sum/k >= threshold)
        count++;
        for(int i = k;i < arr.size();i++){
            sum = sum- arr[i-k] + arr[i];
            avg = sum/k;
            if(avg >= threshold)
            count++;
        }
        return count;
    }
};