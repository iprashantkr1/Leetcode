class Solution {
public:
    bool isPowerOfFour(int n) {
        long long num=1;
        while(num<=n){
            if(num==n)
                return true;
            
            num*=4;
        }
        return false;
    }
};