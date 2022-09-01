class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int sl=s.length() , tl=t.length() ;
        
        int i=0 , j=0 ;
        
        for(i=0; i<tl && j<sl ; i++)
            if(s[j]==t[i])
                j++;
        
        return (j==sl);
            
    }
};