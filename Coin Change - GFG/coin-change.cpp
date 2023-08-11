//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int S[], int m, int n) {
        vector <vector<long long>> dp(m+1, vector<long long>(n+1, 0));
        for(int i=0; i<=m; i++)
            dp[i][0] = 1;
         
        for(int i=1; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(j >= S[i-1])
                    dp[i][j] = dp[i-1][j] + dp[i][j-S[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
           }
       }
       return dp[m][n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends