class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& r) {
        
        int ctr=0 , large=0;
        
        for(const auto& i:r)
        {
            int side=min(i[0],i[1]);
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