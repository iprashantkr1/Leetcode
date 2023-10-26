class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int MOD=pow(10,9)+7;
        sort(arr.begin(),arr.end());
        unordered_map<int,long long>rootWithCount;
        rootWithCount[arr[0]]=1;
        for(int i=1;i<arr.size();i++)
        {
            long long count=1;
            for(auto j : rootWithCount)
            {
                int ele=j.first;
                if(arr[i]%ele==0 && rootWithCount.find(arr[i]/ele)!=rootWithCount.end())
                {
                    count+= rootWithCount[ele] * rootWithCount[arr[i]/ele];
                }
            }
            rootWithCount[arr[i]]=count;
        }

        int res=0;
        for(auto j : rootWithCount)
        {
            res=(res+j.second)%MOD;
        }
        return res;
        
    }
};