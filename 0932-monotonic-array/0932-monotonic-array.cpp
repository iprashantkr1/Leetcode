class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc=true,dec=true;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(inc && nums[i-1]>nums[i])
                inc=false;
            
            if(dec && nums[i-1]<nums[i])
                dec=false;
        }
        return (inc || dec);
    }
};