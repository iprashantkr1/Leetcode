//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<int> q;
		    string temp="";
		    int arr[26]={0};
		    for(int i=0;i<A.size();i++){
		        arr[A[i]-'a']++;
		        if(arr[A[i]-'a']==1){
		            q.push(A[i]);
		        }
		        while(!q.empty() && arr[q.front()-'a']!=1){
		            q.pop();
		        }
		        if(q.empty()){
		            A[i]='#';
		        }else{
		            A[i]=q.front();
		        }
		    }
		    return A;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends