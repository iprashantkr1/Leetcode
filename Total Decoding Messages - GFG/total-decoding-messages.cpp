//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int MOD = 1e9+7;
		    int n=str.length();
		    int dp[n];
		    
		    dp[0]=1;
		    
		    for(int i=1;i<n;i++){
		        if(str[i-1]=='0' && str[i]=='0'){
		            dp[i]=0;
		        }
		        else if(str[i-1]=='0' && str[i]!='0'){
		            dp[i]=dp[i-1]%MOD;
		        }
		        else if(str[i-1]!='0' && str[i]=='0'){
		            if(str[i-1]=='1' || str[i-1]=='2')
		                dp[i]= (i>=2 ? dp[i-2] : 1)%MOD;
		            else
		                dp[i]=0;
		        }
		        else{
		            if(stoi(str.substr(i-1,2))<=26)
		                dp[i]=(dp[i-1]+ (i>=2 ? dp[i-2] : 1))%MOD;
		            else
		                dp[i]=dp[i-1]%MOD;
		        }
		    }
		    
		    return dp[n-1];
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends