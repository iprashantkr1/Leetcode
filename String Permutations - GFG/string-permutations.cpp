//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
     void permute (string& S , vector<string> &v, int i=0 )
    {
        if(i==S.length()-1)
        {
            v.push_back(S);
            return;
        }
        
        for(int j=i; j<S.length(); j++)
        {
            swap(S[i],S[j]);
            permute(S,v,i+1);
            swap(S[j],S[i]);
        }
    }
    vector<string> permutation(string S)
    {
        vector<string> v;
        permute(S,v);
        sort(v.begin(),v.end());
        return v;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends