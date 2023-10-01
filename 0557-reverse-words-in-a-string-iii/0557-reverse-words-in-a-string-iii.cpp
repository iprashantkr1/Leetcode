class Solution {
public:
    string reverseWords(string s) {
        string rev="", temp="";
        for(char c : s){
            if(c==' '){
                reverse(temp.begin(),temp.end());
                rev+=temp+' ';
                temp="";
            }
            else
                temp+=c;
        }
        reverse(temp.begin(),temp.end());
        rev+=temp;
        return rev;
    }
};