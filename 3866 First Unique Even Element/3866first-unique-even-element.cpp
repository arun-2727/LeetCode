class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>mapp;
        for(int x:nums)mapp[x]++;
        for(int x:nums)
            {
                if(x%2==0 && mapp[x]==1)return x;
            }
        return -1;
    }
};