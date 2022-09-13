class Solution {
public:
    char repeatedCharacter(string s) {
        
        unordered_set<char> st;
        st.insert(s[0]);
        
        for(int i=1;i<s.length();i++)
        {
            if(st.find(s[i]) == st.end())
                st.insert(s[i]);
            else    
                return s[i];
            
                
        }
        return ' ';
    }
};