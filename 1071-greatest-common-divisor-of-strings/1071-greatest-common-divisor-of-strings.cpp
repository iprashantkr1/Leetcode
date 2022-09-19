class Solution {
    
private:
    int gcd(int a,int b)
    {
        return (b==0) ? a : gcd(b,a%b);
    }
    
public:
    string gcdOfStrings(string str1, string str2) {
        
        int l1=str1.length() , l2=str2.length();
        
        return (str1+str2 == str2+str1) ? str1.substr(0,gcd(l1,l2)) : "" ;
            
    }
};