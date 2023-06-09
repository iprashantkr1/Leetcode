//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	    vector<string> store;
	    void solve(map<char,int> &mp,int pos,string res,int n){
	        if(pos==n){
	            store.push_back(res);
	            return;
	        }
	        for(auto m:mp){
	            if(m.second>0){
	                mp[m.first]--;
	                string s=res + m.first;
	                solve(mp,pos+1,s,n);
	                mp[m.first]++;
	            }
	        }
	    }
	    
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    map<char,int> mp;
		    for(char c:s) mp[c]++;
		    solve(mp,0,"",s.size());
		    return store;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends