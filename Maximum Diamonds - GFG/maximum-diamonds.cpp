//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int a[], int N, int k) {
        priority_queue<int>pq;
        long long sum=0;
        for(int i=0;i<N;i++)
           pq.push(a[i]);
        while(!pq.empty() && k--)
        {
            sum += pq.top();
            int x = pq.top()/2;
            pq.pop();
            pq.push(x);
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends