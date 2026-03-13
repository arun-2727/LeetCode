class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m-1,q=n-1;
        int k=n+m-1;
        while(p>=0 && q>=0)
        {
            if(nums2[q]>nums1[p])
            {
                nums1[k--]=nums2[q--];
            }
            else nums1[k--]=nums1[p--];
        }
        while(q>=0)
        {
            nums1[k--]=nums2[q--];
        }
    }
};