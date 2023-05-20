//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isStraightHand(int n, int groupsize, vector<int> &hand) {
        if(n % groupsize != 0)
            return false;
     
        multiset<int>s(hand.begin(), hand.end());
        while(!s.empty()){
            int smallest = *s.begin(); s.erase(s.begin());
            for(int i = 1; i < groupsize; i++){
                int next = smallest + i;
                if(!s.count(next))
                    return false;
                s.erase(s.find(next));
            }
        }
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends