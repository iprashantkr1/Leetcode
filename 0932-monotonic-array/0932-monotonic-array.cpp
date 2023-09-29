class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool res1=true,res2=true;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(res1 && nums[i-1]>nums[i])
                res1=false;
            
            if(res2 && nums[i-1]<nums[i])
                res2=false;
        }
        return (res1 || res2);
    }
};