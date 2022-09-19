class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& r) {
        
        int ctr=0 , large=0;
        
        for(int i=0;i<r.size();i++)
        {
            int side=min(r[i][0],r[i][1]);
            if(side > large)
            {
                ctr=1;
                large=side;
            }    
            else if(side == large)
                ctr++;
        }
        return ctr;
    }
};