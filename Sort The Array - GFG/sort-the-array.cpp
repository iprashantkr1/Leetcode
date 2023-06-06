//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
        priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            arr[i]=pq.top();
            pq.pop();
        }
        return arr;
    }
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends