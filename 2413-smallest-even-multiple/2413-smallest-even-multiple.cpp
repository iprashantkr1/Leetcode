class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        int res=n;
        if(n%2!=0)
            res=2*n;
        return res;
    }
};