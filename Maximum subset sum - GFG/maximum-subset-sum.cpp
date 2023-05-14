//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class IntArray
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {

  public:
  vector<vector<long long>>dp;
  long long solve(int i,int flag,int n,vector<int>&a){
      if(i>=n)return 0;
      if(dp[i][flag]!=-1)return dp[i][flag];
      long long ans=0;
      ans=a[i]+solve(i+1,0,n,a);
      if(!flag){
          
          ans=max(ans,solve(i+1,1,n,a));
      }
      return dp[i][flag]=ans;
  }
    long long findMaxSubsetSum(int n, vector<int>&a) {
        dp=vector<vector<long long>>(n+1,vector<long long>(2,-1));
        return solve(0,0,n,a); 
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        IntArray::input(A,N);
        
        Solution obj;
        long long res = obj.findMaxSubsetSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends