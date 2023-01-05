//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        unordered_map<string,int>mp;
        
        sort(words.begin(),words.end());
        
        for(auto w : words)
            mp[w]++;
        
        string ans;
        int size=INT_MIN;
        for(auto w : words)
        {
            int c=0 , n=w.size();
            string temp="";
            for(int i=0;i<n;i++)
            {
                temp+=w[i];
                if(mp[temp])
                    c++;
            }
            if(c==n && n>size)
            {
                ans=w;
                size=n;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends