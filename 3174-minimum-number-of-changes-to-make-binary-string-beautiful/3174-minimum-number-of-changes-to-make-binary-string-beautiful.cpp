class Solution {
public:
    int minChanges(string s) {
        int res=0;
        for(int i=0;i<=s.size()-2;i+=2){
            string str=s.substr(i,2);
            if(str[0]!=str[1])
                res++;   
        }
        return res;
    }
};