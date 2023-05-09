//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int n,int k,vector<int> &arr){       
        int c=0;
        multiset<int>ms1(arr.begin(),arr.end());
        int maxi=arr[0];
        for(int i=0;i<n-1;i++){
            maxi=max(arr[i],maxi);
            auto p=ms1.find(arr[i]);
            ms1.erase(p);
            int l=maxi,r=*(ms1.begin());
            c+=((l+r)>=k);
        }
        return c;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends