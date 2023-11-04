class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        if(left.size()==0){
            sort(right.begin(),right.end());
            return (n-right[0]);
        }
        else if(right.size()==0){
            sort(left.begin(),left.end());
            return (left[left.size()-1]);
        }
        else{
            sort(left.begin(),left.end());
            sort(right.begin(),right.end());

            int maxi=max(left[left.size()-1],right[right.size()-1]);

            int l = left[left.size()-1]-0;
            int r = n - right[0];

            int res=max(l,r);
             return res;
        }
       
    }
};