//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int a_ctr=0 , b_ctr=0;
    char prev='#';
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        
        if(ch==prev)    continue;
        
        if(ch=='a') a_ctr++;
        else    b_ctr++;
        
        prev=ch;
    }
    
    return min(a_ctr,b_ctr)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends