class Solution {
public:
    
    bool isPrime(int n)
    {
        if(n<=1)    return false;
        
        if(n<=3)    return true;
        
        if(n%2==0 || n%3==0)    return false;
        
        for(int i=5;i*i<=n;i+=6)
            if(n%i==0 || n%(i+2)==0)    return false;
        
        return true;
    }
    
    bool isThree(int n) 
    {
        if(isPrime(n))  
            return false;
        
        int ctr=2;
        
        for(int i=2;i<n && ctr<=3;i++)
            ctr+= n%i==0 ;
        
        return ctr==3;
    }
};