class Solution {
public:
    int maxDistinct(string s) {
        map<char,int> mapp;
        for(char c:s)
        {
            mapp[c]++;
        }
        return mapp.size();
    }
};