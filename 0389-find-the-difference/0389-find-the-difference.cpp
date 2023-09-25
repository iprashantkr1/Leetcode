class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        char c=t[n];
        for(int i=0;i<n;i++)
            c^=t[i]^s[i];
        
        return c;
    }
};