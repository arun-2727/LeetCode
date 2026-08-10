class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(char&c : s)
        {
            
            if(isalnum(c))
            {
                ss+=tolower(c);
            }
        }
        string sss=ss;
        reverse(sss.begin(),sss.end());
        if(ss==sss)
        
        {
            return true;
        }
        else
        {
            return false;
        }
    
        
    }
};