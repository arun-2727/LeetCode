bool isPalindrome(int x) {
    long A=0;
   long B=x;
    if(x<0)
    {
        return false;
    }
   
    while(x>0)
    {
        int rem=x%10;
        A=A*10+rem;
        x=x/10;

    }
    if(A==B)
    {
        return true;
    }
    return false;


}