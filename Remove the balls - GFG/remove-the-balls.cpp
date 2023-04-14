//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        int i=1,j=1;
        stack<int>col;
        stack<int>rad;
        col.push(color[0]);
        rad.push(radius[0]);
        while(i<N){
            if(col.size()>0 && rad.size()>0 && col.top()==color[i] && rad.top()==radius[i]){
                col.pop();
                rad.pop();
            }
            else{
                col.push(color[i]);
                rad.push(radius[i]);
            }
            i++;
            j++;
        }
        return col.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends