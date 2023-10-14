class Solution {
public:
    int cal(int i, int rem,vector<int>& cost, vector<int>& time,vector<vector<int>>&dp)
    {
        if(rem<0)
            return 0;
        if(i==-1)
        {
            if(rem==0) return 0;
            return 1e9;
        }
        if(dp[i][rem]!=-1)
            return dp[i][rem];
        int ans = 1e9;
        ans = min(ans,cal(i-1,rem,cost,time,dp));
        ans = min(ans,cost[i] + cal(i-1,rem-time[i]-1,cost,time,dp));
        return dp[i][rem] = ans;
    }
  
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return cal(n-1,n,cost,time,dp);
    }
};