//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        
        int maxLen=0 , start=0, end=0, count=0;
        
        while(end<n){
            
            if(arr[end]=='O')   count++;
            
            while(start<n && count>m){
                if(arr[start]=='O') count--;
                start++;
            }
            
            maxLen=max(maxLen, end-start+1);
            end++;
        }
        
        return maxLen;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends