class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        if (poured==0) return 0;
        vector<vector<double>> A(query_row+2, vector<double>(query_row+2 , 0));
        A[0][0]=poured;
        for(int i=0; i<=query_row; i++){
            for(int j=0; j<=i; j++){
                double A_ij=A[i][j];
                if ( A_ij<=1) continue;
                double excess=(A_ij-1)/2.0;
                A[(i+1)][j]+= excess;
                A[(i+1)][j+1]+= excess;
            }
        }
        return min(1.0, A[query_row][query_glass]);
        
    }
};