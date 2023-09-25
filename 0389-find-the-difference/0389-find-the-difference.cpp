class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int sum=t[n];
        for(int i=0;i<n;i++)
            sum+=t[i]-s[i];
        
        return char(sum);
    }
};