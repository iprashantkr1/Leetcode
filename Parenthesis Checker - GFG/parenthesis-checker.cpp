//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char>st;
        char ch = s[0];
        if(ch=='}' || ch==')' || ch==']')
            return false;
        st.push(ch);
        
        for(int i=1;i<s.length();i++){
            char c = s[i];
            if(c=='{' || c=='(' || c=='['){
                st.push(c);
            }
            else if(st.empty()){
                return false;
            }
            else{
                char ct = st.top();
                if((ct=='{' && c=='}') || (ct=='(' && c==')') || (ct=='[' && c==']')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends