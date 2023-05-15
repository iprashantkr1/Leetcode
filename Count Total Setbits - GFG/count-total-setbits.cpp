//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long countBits(long long N) {
        vector<int>temp(N+1 , 0);   
        long long cnt = 0;   
        for(long long i = 1 ; i <= N ; i++)
        {
            if(i % 2 == 0)
                temp[i] = temp[i/2];
            else
                temp[i] = temp[i/2] + 1;
            cnt += temp[i];
        }     
        return cnt;
    
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends