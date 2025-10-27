class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mapp,hash;
        if (s1.size() > s2.size()) return false;
        int left=0,k=s1.size();
        for(char c:s1)
        {
            mapp[c]++;
        }
        for(int right=0;right<s2.size();right++)
        {
             hash[s2[right]]++;
            if(right-left+1>k) 
            {   
                hash[s2[left]]--;
                
                if(hash[s2[left]]==0)
                {
                    hash.erase(s2[left]);
                }
                left++;
            }
            if(right-left+1==k && mapp==hash)
            {
                return true;
            }


        }
        return false;
    }
};