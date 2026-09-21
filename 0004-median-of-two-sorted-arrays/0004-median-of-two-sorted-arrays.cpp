class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1 = nums1.size(),n2 = nums2.size();
        vector<int> ans;
        int i = 0, j = 0;
        while(i < n1 && j <n2){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i < n1){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j < n2){
            ans.push_back(nums2[j]);
            j++;
        }
        int mid = ans.size()/2;
        if(ans.size()%2 == 1){
            return (double)ans[mid];
        }
        double mid1 = ((double)ans[mid]+(double)ans[mid-1])/2;
        return mid1;
    }
};