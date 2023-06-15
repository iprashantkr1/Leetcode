//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        if(S.size() == 1) return S;
        int length = 0;
        string answer = "";
        
        for(int i = 0; i < S.size(); i++) {
            int left = i; 
            int right = i;
            
            // Odd length Palindrome
            while(left >= 0 && right < S.size() && S[left] == S[right]) {
                if((right - left + 1) > length) {
                    length = (right - left + 1);
                    answer = S.substr(left, length);
                }
                left--; 
                right++;
            }
            
            // Even length Palindrome
            left = i;
            right = i + 1;
            while(left >= 0 && right < S.size() && S[left] == S[right]) {
                if((right - left + 1) > length) {
                    length = (right - left + 1);
                    answer = S.substr(left, length);
                }
                left--; 
                right++;
            }
        }
        
        return answer;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends