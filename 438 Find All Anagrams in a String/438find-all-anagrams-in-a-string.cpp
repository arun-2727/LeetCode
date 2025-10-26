class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int left=0;
        vector<int> res;
        if (s.size() < p.size()) return res;
        unordered_map<char,int> mapp;
        unordered_map<char,int> hash;
        for(char c:p)
        {
            mapp[c]++;
        }
        for(int right=0;right<s.size();right++)
        {   char c=s[right];
           hash[c]++;
           if(right-left+1>p.size())
           {
             char leftChar = s[left];
                hash[leftChar]--;
                if (hash[leftChar] == 0) hash.erase(leftChar);
                left++;
           }
          if (right - left + 1 == p.size() && hash == mapp) {
                res.push_back(left);
            }
            
        }
        return res;
    }
};