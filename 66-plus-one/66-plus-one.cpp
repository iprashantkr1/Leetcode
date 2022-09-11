class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        for(int i=n-1;i>=0;i--)
        {
            if((digits[i]+1)%10 != 0) 
            {
                digits[i]++;
                return digits;
            }
            else if((digits[i]+1)%10 == 0)
            {
                digits[i]=0;
            }     
        }
        digits.insert(digits.begin() , 1);
        return digits;
    }
};