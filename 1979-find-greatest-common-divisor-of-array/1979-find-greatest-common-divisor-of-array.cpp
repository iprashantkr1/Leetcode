class Solution {
public:
    
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);   
    }
    
    int findGCD(vector<int>& nums) {
        
        int small=1001 , large=0;
         for(int x : nums)
         {
             if(x<small)
                 small=x;
             if(x>large)
                 large=x;
         }
        
        return gcd(small,large);
        
        
    }
};