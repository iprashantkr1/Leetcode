//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        int m = N/K, r = N%K;
        if(m%2 == 0 && r) return K*(m/2)+r;
        if(m%2 && !r) return K*(m/2+1);
        if(m%2 && r) return K*(m/2+1)+1;
        if(m%2 == 0 && !r) return K*(m/2)+1;
    }

};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends