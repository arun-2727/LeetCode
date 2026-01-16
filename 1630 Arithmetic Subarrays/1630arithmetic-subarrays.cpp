class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=l.size();
        vector<bool> res(n);
        for(int i=0;i<l.size();i++)
        {  
            vector<int> temp;
            for(int j=l[i];j<=r[i];j++)temp.push_back(nums[j]);
            sort(temp.begin(),temp.end());
            if(temp.size()<2)
            {
                res[i]=true;
                continue;
            }
            int diff=temp[1]-temp[0];
            int c=0;
            for(int k=1;k<temp.size()-1;k++)
            {
                if(temp[k+1]-temp[k]!=diff)
                {
                    res[i]=false;
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                res[i]=true;
            }

        }
        return res;
    }
};