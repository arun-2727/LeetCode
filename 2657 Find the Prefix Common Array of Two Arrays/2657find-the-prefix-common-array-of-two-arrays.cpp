class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int>mapp,hash;
        int n=A.size();
        vector<int> res(n);
        
        for(int i=0;i<n;i++)
        {
            mapp[A[i]]++;
            hash[B[i]]++;
            int count=0;
            for(auto& p:mapp)
            {
                int key=p.first;
                if(hash.count(key))count++;
            }
            res[i]=count;
        }
        return res;
    }
};