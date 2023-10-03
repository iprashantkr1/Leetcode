class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int n : nums)
            freq[n]++;

        int count=0;
        for(auto f : freq)
        {
            int t=f.second-1;
            count+=(t*(t+1)/2);
        }
        return count;

    }
};