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
        
        for(int i=2;i<n;i++)
            if(n%i==0)
            {
                ctr++;
                if(ctr>3)
                    return false;
            } 
        
        if(ctr<=2)
            return false;
        
        return true;
    }
};