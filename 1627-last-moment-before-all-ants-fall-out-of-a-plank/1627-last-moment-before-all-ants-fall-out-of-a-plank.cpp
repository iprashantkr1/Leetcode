class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int res = 0;
        for(int r : right)
            res = max(res , n-r);
        
        for(int l : left)
            res = max(res , l);
        
        return res;
    }
};