class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int pro = 1;
        int sum = 0;
        while(n!=0){
            int rem = n%10 ;
            pro *= rem ;
            sum += rem ;
            n /= 10 ;
        }
        return (pro-sum);
    }
};