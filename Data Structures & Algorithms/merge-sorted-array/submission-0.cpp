class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = nums1.size();
        for(int i=l-1, x=0;i>=0 && x<nums2.size();i--, x++){
            if(nums1[i] == 0){
                nums1[i] = nums2[x];
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};