//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    int maxSweetness(vector<int>& sweetness, int N, int K) {
        // Write your code here.
        int l=INT_MAX,h=0,mid,ans=0;
        for(int i=0;i<N;i++){
            h+=sweetness[i];
            l=min(sweetness[i],l);
        }
        
        while(l<=h){
            mid=(l+h)/2;
            
            int sweet=0, ctr=0;
            for(int i=0;i<N;i++){
                sweet+=sweetness[i];
                if(sweet>=mid){
                    sweet=0;
                    ctr++;
                }
            }
            
            if(ctr>=K+1){
                ans=mid;
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends