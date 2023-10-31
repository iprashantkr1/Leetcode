class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int>res(n);
        res[0]=pref[0];
        for(int i=1;i<n;i++)
            res[i] = pref[i]^pref[i-1];
        return res;

    }
};