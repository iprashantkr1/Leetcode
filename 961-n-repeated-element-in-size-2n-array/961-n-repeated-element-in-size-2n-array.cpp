class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++)
            ump[nums[i]]++;
        
        for(auto x: ump)
            if(x.second == n/2)
                return x.first;
        return -1;
    }
};