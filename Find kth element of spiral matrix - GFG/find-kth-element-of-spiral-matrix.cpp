//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int A[][1000], int n, int m, int k) {
        vector<int> result;
        int top = 0, bottom = n-1, left = 0, right = m-1;
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++)
                result.push_back(A[top][i]);
            top++;
            for (int i = top; i <= bottom; i++)
                result.push_back(A[i][right]);
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    result.push_back(A[bottom][i]);
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(A[i][left]);
                left++;
            }
        }
        return result[k-1];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends