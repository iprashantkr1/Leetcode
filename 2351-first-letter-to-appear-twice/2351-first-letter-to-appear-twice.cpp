class Solution {
public:
    char repeatedCharacter(string s) {
        
        int arr[26]={0};
        
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']++;
            
            if(arr[s[i]-'a'] > 1)
                return s[i];
        }  
        return 'z';
    }
};