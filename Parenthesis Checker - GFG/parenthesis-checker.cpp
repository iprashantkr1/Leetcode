//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matching(char a , char b){
        return ((a=='{' && b=='}') || (a=='(' && b==')') || (a=='[' && b==']'));
    }
    
    bool ispar(string s)
    {
        // Your code here
        stack<char>st;
        
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(c=='{' || c=='(' || c=='['){
                st.push(c);
            }
            else{
                if(st.empty())
                    return false;
                else if(matching(st.top(),c) == false)
                    return false;
                else
                    st.pop();
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