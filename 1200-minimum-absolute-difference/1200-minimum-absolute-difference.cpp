class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
    
    vector<vector<int>> result;
    int min_diff = INT_MAX;
    
    // find min difference
    for (int i = 0; i < arr.size() - 1; ++i) {
        min_diff = min(arr[i + 1] - arr[i], min_diff);
    }
    
    // form a list of pairs with min difference, ascending  
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i + 1] - arr[i] == min_diff)
            result.push_back({arr[i], arr[i + 1]});
    }
    return result;
    }
};