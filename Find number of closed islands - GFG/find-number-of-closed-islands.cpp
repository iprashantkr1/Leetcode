//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back


int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

class Solution {
    public:
    
    bool bound(int i,int j,int n,int m){//checking if the cell lies on any boundary
        return (i==0||j==0||i==n-1||j==m-1);
    }
    int closedIslands(vector<vector<int>>&a, int n, int m) {
        
        queue<pii>q;
        int ans=0;
        vector<vector<int>>vis(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]&& !vis[i][j]&& !bound(i,j,n,m)){
                    bool chk=true;
                    q.push({i,j});
                    vis[i][j]=1;
                    while(!q.empty()){
                        int curx=q.front().fi;
                        int cury=q.front().se;
                        q.pop();
                        for(int k=0;k<4;k++){
                            int newx=curx+dx[k];
                            int newy=cury+dy[k];
                            if(newx>=0&&newy>=0&&newx<n&&newy<m&&a[newx][newy]&&!vis[newx][newy]){
                                if(bound(newx,newy,n,m))chk=false;
                                q.push({newx,newy});
                                vis[newx][newy]=1;
                            }
                        }
                    }
                    
                    if(chk)ans++;
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends