//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    int dp[1001][1001];
    Solution(){memset(dp,-1,sizeof(dp));}
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string &s1, string &s2)
    {
        if(x==0||y==0)return 0;
        if(dp[x][y]!=-1)return dp[x][y];
        if(s1[x-1]==s2[y-1])return dp[x][y]=(1+lcs(x-1,y-1,s1,s2));
        else return dp[x][y]=max(lcs(x-1,y,s1,s2),lcs(x,y-1,s1,s2));
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends