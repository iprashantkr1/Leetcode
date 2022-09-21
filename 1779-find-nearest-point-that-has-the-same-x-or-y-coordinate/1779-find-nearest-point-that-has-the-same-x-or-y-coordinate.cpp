class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
        int smallest_dist = INT_MAX ;
        int smallest_index = -1 ;
        int dist = INT_MAX , ind = 0 ;
        for(int i = 0; i<points.size() ; i++)
        {
            if(x==points[i][0] || y==points[i][1])
            {
                dist = abs(x-points[i][0]) + abs(y-points[i][1]) ;
                ind = i ;
            }    
            if(dist<smallest_dist)
            {
                smallest_dist = dist ;
                smallest_index = ind ;
            }
        }
        return smallest_index;
    }
};