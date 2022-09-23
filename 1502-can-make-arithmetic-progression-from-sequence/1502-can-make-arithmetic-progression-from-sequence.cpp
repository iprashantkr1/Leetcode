class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        int n=arr.size();
        
        if(n<=2)    return true;
        
        sort(arr.begin(),arr.end());
        
        int tmp=arr[1]-arr[0];
        
        for(int i=1;i<n;i++)
            if(arr[i]-arr[i-1] != tmp)
                return false;
        return true;
    }
};

