class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>hash1;
        map<char,int>hash2;
        
        for(char ch : s)
            hash1[ch]++;
        
        for(char ch : t)
            hash2[ch]++;
        
        for(int i=97;i<=122;i++)
        {
            if(hash1[i]!=hash2[i])
                return false;
        }
        return true;
        
    }
};