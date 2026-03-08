class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int idx=-1;
        int mini=INT_MAX;
        for(int i=0;i<capacity.size();i++)
            {
                if(capacity[i]<itemSize)continue;
                int diff=capacity[i]-itemSize;
                if(diff<mini)
                {
                    mini=diff;
                    idx=i;
                }
            }
        return idx;
    }
};