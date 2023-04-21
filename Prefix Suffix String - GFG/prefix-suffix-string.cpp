//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        int i=0 , j=0;
        int n=s1.size() , m=s2.size();
        int ans=0;
        while(i<n && j<m){
            if(s1[i].find(s2[j]) != -1){
                int size = s2[j].length();
                string pre = s1[i].substr(0,size);
                string suf = s1[i].substr(s1[i].size() - size);
                if(pre == s2[j] || suf == s2[j]){
                    i=0;
                    ans++;
                    j++;
                }else{
                    i++;
                }
            }else{
                i++;
            }
        }
        return ans;
         
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends