class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int idx=0;
        for(int i=1;i<=n;i++)
        {
            if(i==target[idx])
            {
                res.push_back("Push");
                idx++;
            }
            else
            {
                res.push_back("Push");
                res.push_back("Pop");
            }
            if(idx==target.size())break;
        }
        return res;
    }
};