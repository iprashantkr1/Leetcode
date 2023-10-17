class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        
        if(sum%3!=0)
            return false;
        
        int part=sum/3;
        int preSum=0;
        bool first=false, second=false , third=false;
        for(int i=0;i<arr.size();i++)
        {
            preSum+=arr[i];
            if(!first && preSum==part)
                first=true;
            else if(first && !second && preSum==(2*part))
                second=true;
            else if(first && second && !third && preSum==(3*part))
                third=true;
        }
        return (first && second && third);
    }
};