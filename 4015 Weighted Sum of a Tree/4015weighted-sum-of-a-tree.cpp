class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        vector<vector<int>>tree(nums.size());
        for(int i=1;i<nums.size();i++)
            {
                tree[parent[i]].push_back(i);
            }
        vector<int>depth(nums.size());
        depth[0]=1;
        int h=1;
        queue<int>q;
        q.push(0);
        while(!q.empty())
            {
                int node=q.front();
                q.pop();
                for(int x:tree[node])
                    {
                        depth[x]=depth[node]+1;
                        h=max(h,depth[x]);
                        q.push(x);
                    }
                
            }
        long long res=0;
        for(int i=0;i<nums.size();i++)
            {
                res+=1LL*nums[i]*(h-depth[i]+1);
            }
        return res;
    }
};