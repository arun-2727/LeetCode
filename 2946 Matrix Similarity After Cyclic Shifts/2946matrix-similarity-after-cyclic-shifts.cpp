class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>>temp=mat;
        int m=mat[0].size();
        k=k%m;
        for(int i=0;i<mat.size();i++)
        {
            if(i%2==0)
            {
                rotate(mat[i].begin(),mat[i].begin()+k,mat[i].end());
            }
            else 
            {
                rotate(mat[i].begin(),mat[i].end()-k,mat[i].end());
            }
        }
        
        return temp==mat;
    }
};