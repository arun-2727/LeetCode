class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> res;
        
        for(int i=0;i<n;i++)
        {   int count=0;
            for(int j=0;j<n;j++)
            {
                if(j==i)
                {
                    continue;
                }
                else if(boxes[j]=='1')
                {
                    count+=abs(i-j);
                }
            }
            res.push_back(count);
        }
        return res;
    }
};