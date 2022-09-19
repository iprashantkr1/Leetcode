class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n=nums.size();
        unordered_set<int>s;
        for(int x:nums)
        {
            if(s.count(x))
                return x;
            s.insert(x);
        }
        
        return NULL;
    }
};