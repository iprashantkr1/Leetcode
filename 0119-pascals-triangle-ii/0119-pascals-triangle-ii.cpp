class Solution {
public:
    vector<int> getRow(int i) {
        vector<int>res;
        long long val=1;
        for(int j=0;j<=i;j++)
        {
            res.push_back(val);
            val=val*(i-j)/(j+1);
        }
        return res;
    }
};