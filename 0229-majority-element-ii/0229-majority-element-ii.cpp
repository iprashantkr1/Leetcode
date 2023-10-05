class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int a : nums)
            freq[a]++;

        vector<int>res;
        for(auto f : freq)
            if(f.second > floor(n/3))
                res.push_back(f.first);

        return res;
    }
};