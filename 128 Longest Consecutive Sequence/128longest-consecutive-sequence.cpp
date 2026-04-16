class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0)return 0;
        int maxi=1;
        int c=0;
        for(auto p:s)
        {
            if(s.find(p-1)==s.end())
            {
                c=1;
                int x=p;
                while(s.find(x+1)!=s.end())
                {
                    x++; c++;
                }

            }
            maxi=max(maxi,c);
        }
        return maxi;
    }
};