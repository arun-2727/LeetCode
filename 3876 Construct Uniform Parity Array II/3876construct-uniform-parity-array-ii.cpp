class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        bool e=false;
        bool o=false;
        int p=nums1[0]&1;
        for(int i=0;i<nums1.size();i++)
            {
                if(nums1[i]%2==0)
                {
                    if(p==1)
                    {
                        if(!o)return false;
                    }
                    e=true;
                }
                else
                {
                    if(p==0)
                    {
                        if(!o)return false;
                    }
                    o=true;
                }
            }
        return true;
    }
};