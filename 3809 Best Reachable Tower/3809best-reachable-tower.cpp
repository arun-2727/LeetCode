class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int x=center[0];
        int y=center[1];
        int maxq=-1;
        int bestx=-1,besty=-1;
        for(auto &t:towers)
            {
                int a=t[0];
                int b=t[1];
                int q=t[2];
                int dist=abs(a-x)+abs(b-y);
                if(dist<=radius)
                {
                    if(q>maxq)
                    {
                        maxq=q;
                        bestx=a;
                        besty=b;
                        
                    }
                    else if( q==maxq)
                    {
                        if(a<bestx || (a==bestx && b<besty))
                        {
                            bestx=a;
                            besty=b;
                        }
                    }
                }
            }
        if(maxq==-1)
        {
            return {-1,-1};
        }
        return {bestx,besty};
    }
};