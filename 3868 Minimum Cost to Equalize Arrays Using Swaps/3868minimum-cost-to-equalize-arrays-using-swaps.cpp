class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int>mapp;
        for(int x:nums1)
            {
                mapp[x]++;
            }
        for(int x:nums2)
            {
                mapp[x]--;
            }
        int c=0;
        for(auto &p:mapp)
            {
                int x=abs(p.second);
                if(x%2==1)return -1;
                c+=x;
            }
        return c/4;
    }
};