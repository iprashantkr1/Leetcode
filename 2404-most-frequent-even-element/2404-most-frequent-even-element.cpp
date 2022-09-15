class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        //map to store frequency of even elements
        map<int,int> mp;
        
        //frequency of even elements
        for(auto x:nums)
            if(x%2==0)
                mp[x]++;
        
        
        int maxi=-1, res = -1;
        
        for(auto x:mp)
           if(x.second > maxi )
           {
               maxi=x.second;
               res=x.first;
           }
            
        return res;
        
    }
};