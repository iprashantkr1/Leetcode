class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool res1=true;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i]){
                res1=false;
                break;
            }
        }
        if(res1)
            return true;
        res1=true;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]<nums[i]){
                res1=false;
                break;
            }
        }
        return res1;
    }
};