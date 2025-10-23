class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        for(int i:nums1)
        {
            freq[i]++;
        }
        vector<int> res;
        for(int i:nums2)
        {
            if(freq[i]>0)
            {
                res.push_back(i);
                freq[i]--;
            }
        }
        return res;
    }
};