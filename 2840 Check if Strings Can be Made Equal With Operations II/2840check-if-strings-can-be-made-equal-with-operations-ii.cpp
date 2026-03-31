class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<string>a(2),b(2);
        for(int i=0;i<s1.size();i++)
        {
            int d=i&1;
            a[d]+=s1[i];
            b[d]+=s2[i];
        }
        for(int i=0;i<2;i++)
        {
            sort(a[i].begin(),a[i].end());
            sort(b[i].begin(),b[i].end());

        }
        return a==b;
    }
};