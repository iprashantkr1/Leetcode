class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n=nums.size();
        
        int i=0 , j=n-1;
        
        while(i<j){
            if(nums[i]%2==0)
                i++;
            if(nums[j]%2!=0)
                j--;
            
            if(i<j && nums[i]%2!=0)
            {
                if(nums[j]%2==0)
                {
                    swap(nums[i],nums[j]);
                    i++;
                    j--;
                }
                else
                {
                    j--;
                    //swap(nums[i],nums[j]);
                }
            }
        }
        return nums;
    }
};