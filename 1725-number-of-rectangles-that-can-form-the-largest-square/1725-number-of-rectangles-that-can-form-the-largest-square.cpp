class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        vector<int> list;
        int n=rectangles.size();
        int large=INT_MIN;
        for(int i=0;i<n;i++)
        {
            list.push_back(min(rectangles[i][0],rectangles[i][1]));
            if(list[i]>large)
                large=list[i];
        }
        
        int ctr=0;
        
        for(int x:list)
            if(x==large)
                ctr++;
        
        return ctr;
        
        
    }
};