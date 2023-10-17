class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>res;
        int numRows=rowIndex+1;
        for(int i=1;i<=numRows;i++)
            res.push_back(vector<int>(i,1));
        
        for(int i=3;i<=numRows;i++)
            for(int j=1;j<=i-2;j++)
                res[i-1][j]=res[i-2][j-1]+res[i-2][j];
                
        return res[numRows-1];
    }
};