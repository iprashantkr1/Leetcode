//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string s, string t) {
        // code here
        int i=0, j=0;
        while(i<s.length() && j<t.length()){
            if(t[j]>='0' && t[j]<='9'){
                int x=t[j]-'0';
                j++;
                while(t[j]>='0' && t[j]<='9'){
                    x*=10;
                    x+=(t[j]-'0');
                    j++;
                }
                i+=x;
            }
            else{
                if(s[i]==t[j]){
                    i++;
                    j++;
                }
                else{
                    return 0;
                }
            }
        }
        
        if(i!=s.length())
            return 0;
        return 1;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends