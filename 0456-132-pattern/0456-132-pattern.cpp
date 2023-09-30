class Solution
{
public:
    bool find132pattern(vector<int> &nums)
    {
        if (nums.empty())
            return false;
        int n = nums.size();
        vector<int> minVal(n);
        minVal[0] = nums[0];
        stack<int> st;
        for (int i = 1; i < n; i++)
        {
            minVal[i] = min(minVal[i - 1], nums[i]);
        }
        for (int j = n - 1; j > 0; j--)
        // here j is the second element so it cannot be at 0th position
        {
            while (!st.empty() && nums[st.top()] < nums[j])
            {
                // while the stack is not empty and the top is less than nums[j], this could be our possible k
                // only if the if condition satisfy
                // i.e it should be greater than the minVal i.e nums[i]
                if (nums[st.top()] > minVal[j - 1])
                {
                    return true;
                }
                // else remove the position from stack
                st.pop();
            }
            st.push(j);
        }
        return false;
    }
};