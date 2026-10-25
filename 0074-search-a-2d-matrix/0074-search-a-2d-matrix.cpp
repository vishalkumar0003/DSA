class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int start = 0, end = n*m-1,mid, r_idx, c_idx;
        while(start <= end){
            mid = (start+end)/2;
            r_idx = mid/m;
            c_idx = mid%m;
            if(matrix[r_idx][c_idx] == target){
                return 1;
            }
            else if(matrix[r_idx][c_idx] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return 0;
    }
};