//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
vector<int>isPrime(10000,1);
bool flag=false;
class Solution{
  public:
    void seive()
    {
        for(int i=2;i<10000;i++)
            for(int j=i+i;j<10000;j=j+i)
                isPrime[j]=0;
    }
    
    int shortestPath(int Num1,int Num2)
    {   
        if(!flag){
            seive();
            flag=true;
        }
        
        queue<pair<int,int>> q;
        q.push({Num1,0});
        vector<int> vis(10000,0);
        vis[Num1]=1;
        while(q.size()){
            auto t = q.front();
            q.pop();
            if(t.first==Num2)return t.second;
            string num = to_string(t.first);
            for(int j=0;j<4;j++){
                for(int k=0;k<=9;k++){
                    char c= '0'+k;
                    string num2=num;
                    num2[j]=c;
                    int temp = stoi(num2);
                    if(isPrime[temp] and num2[0]!='0' and vis[temp]==0){
                        q.push({temp,t.second+1});
                        vis[temp]=1;
                    }
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
// } Driver Code Ends