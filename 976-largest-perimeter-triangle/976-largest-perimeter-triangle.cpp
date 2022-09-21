class Solution {
public:
    int largestPerimeter(vector<int>& nums)
    {
        int perimeter = 0 ;
        int l = nums.size() ;
        sort(nums.begin() , nums.end()) ; //O(nlogn)
        for(int i = l-1 ; i>1 ; i--) //worst case-O(n)
            if((nums[i-1]+nums[i-2])>nums[i])
            {
                perimeter = nums[i]+nums[i-1]+nums[i-2];
                return perimeter ;
            }
        
        return 0 ; 
    }
};