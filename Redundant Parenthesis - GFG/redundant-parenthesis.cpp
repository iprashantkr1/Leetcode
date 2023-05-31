//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    string removeBrackets(string Exp){    
        stack<int> st;
        int n=Exp.length();
        vector<bool> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(Exp[i]=='(' || Exp[i]=='+' || Exp[i]=='-' || Exp[i]=='/' || Exp[i]=='*')
                st.push(i);
            else if(Exp[i]==')')
            {
                bool plus=false,min=false,divi=false,mul=false;
                while(!st.empty() && Exp[st.top()]!='(')
                {
                    int curr=st.top();
                    st.pop();
                    if(Exp[curr]=='+') plus=true;
                    if(Exp[curr]=='-') min=true;
                    if(Exp[curr]=='/') divi=true;
                    if(Exp[curr]=='*') mul=true;
                }
                
                int j=st.top();
                st.pop();
                
                int prev=i;
                i++;
                while(i<n && !st.empty() && Exp[st.top()]=='(' && Exp[i]==')')
                {
                    vis[i]=vis[st.top()]=true;
                    st.pop();
                    i++;
                }
                i--;
                if(i+1<n && Exp[i+1]=='*')
                    if(divi || plus || min) continue;
                if(i+1<n && Exp[i+1]=='/')
                    if(divi || plus || min || mul) continue;
                
                if(st.empty() || (!plus && !min && !mul && !divi)) vis[prev]=vis[j]=true;
                else if(Exp[st.top()]=='+') vis[prev]=vis[j]=true;
                else if(Exp[st.top()]=='-' && !plus && !min) vis[prev]=vis[j]=true;
                else if(Exp[st.top()]=='*' && ((divi || mul) && !plus && !min)) vis[prev]=vis[j]=true;
            }
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(!vis[i]) ans.push_back(Exp[i]); 
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string Exp;
        cin >> Exp;
        
        Solution ob;
        cout << ob.removeBrackets(Exp) << endl;
    }
    return 0; 
} 

// } Driver Code Ends