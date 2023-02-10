//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int letter[26]={0};
        for(int i=0;i<s.length();i++){
            letter[s[i]-'a']++;
        }
        int b=letter['b'-'a'];
        int a=letter['a'-'a'];
        int l=(letter['l'-'a'])/2;
        int o=(letter['o'-'a'])/2;
        int n=letter['n'-'a'];
        int res=min(b,min(a,min(l,min(o,n))));
        return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends