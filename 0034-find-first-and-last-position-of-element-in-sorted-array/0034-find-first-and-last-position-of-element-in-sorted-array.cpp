class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res(2,-1);
        int ind=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target && ind==-1)
                res[0]=i;
            if(nums[i]==target)
                ind=i;

        }
        res[1]=ind;
        return res;
    }
};