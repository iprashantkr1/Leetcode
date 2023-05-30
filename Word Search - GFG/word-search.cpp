//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
   bool solve(int  i , int j , int ind , string word , vector<vector<char>> &board , vector<vector<int>> &vis)
   {
       if(ind == word.size())
       return true;
       
       int n = board.size(), m = board[0].size();
       
       if(i>= n || j>=m || i<0 || j<0 || vis[i][j]==1 || board[i][j] != word[ind])
       return false;
     
       vis[i][j]  = 1;
       if(solve(i+1 , j , ind + 1 , word , board , vis) || 
       solve(i , j+1 , ind + 1 , word , board , vis) || 
       solve(i-1 , j , ind + 1 , word , board , vis) || 
       solve(i , j-1 , ind + 1 , word , board , vis))
       return true;
       
       vis[i][j] = 0;
       
       return false;
       
   }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int m = board[0].size() , n = board.size();
        vector<vector<int>> vis(n , vector<int> (m , 0));
        for(int  i = 0 ;i < n ; i++)
        {
            for(int j = 0 ; j   < m ; j++){
                if(board[i][j] == word[0])
                  if(solve(i, j , 0 , word , board , vis))
                    return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends