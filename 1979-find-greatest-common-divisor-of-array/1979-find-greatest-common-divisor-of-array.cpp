class Solution {
public:
    
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);   
    }
    
    int findGCD(vector<int>& nums) {
        
        int small=INT_MAX , large=INT_MIN;
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