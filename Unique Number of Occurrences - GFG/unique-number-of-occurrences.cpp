//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    bool isFrequencyUnique(int n, int arr[]) {
        unordered_map<int, int> frequencies;
        for (int i=0;i<n;i++) {
            frequencies[arr[i]]++;
        }
        unordered_set<int> frequencySet;
        for (auto& entry : frequencies) {
            frequencySet.insert(entry.second);
        }
        return frequencySet.size() == frequencies.size();
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends