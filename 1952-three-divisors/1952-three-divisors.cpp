class Solution {
public:
    
    bool isThree(int n) 
    {
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