//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool isPalindrome(string s){
        string rev=s;
        reverse(s.begin(),s.end());
        return (s==rev);
    }
    
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        map<string,int>mp;
        map<string,int>pal;
        
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        
        for(int i=0;i<n;i++){
            if(!isPalindrome(arr[i])){
                string str = arr[i];
                string rev = str;
                reverse(rev.begin(),rev.end());
                if(mp[str]!=mp[rev])
                    return false;
            }
            else{
                pal[arr[i]]++;
            }
        }
        
        int ctr=0;
        for(auto p : pal){
            if(p.second%2==1)
                ctr++;
        }
        
        if(ctr<=1)
            return true;
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends