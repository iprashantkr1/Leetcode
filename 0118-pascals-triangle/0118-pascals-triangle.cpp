class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;

        for(int i=1;i<=numRows;i++)
            res.push_back(vector<int>(i,1));
        
        for(int i=3;i<=numRows;i++)
            for(int j=1;j<=i-2;j++)
                res[i-1][j]=res[i-2][j-1]+res[i-2][j];
                
        return res;
    }
};