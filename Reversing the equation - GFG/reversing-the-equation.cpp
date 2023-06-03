//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string>st;
            string t1="";
            string res="";
            for(char c : s){
                if(c=='+' || c=='-' || c=='*' || c=='/'){
                    st.push(t1);
                    t1=c;
                    st.push(t1);
                    t1="";
                }
                else{
                    t1+=c;
                }
            }
            st.push(t1);
            
            while(!st.empty()){
                res+=st.top();
                st.pop();
            }
            return res;
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends