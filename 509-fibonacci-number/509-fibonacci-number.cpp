class Solution {
public:
    int fib(int n) {
        double phi=(sqrt(5)+1)/2;
        return round (pow(phi,n)/sqrt(5));
    }
};