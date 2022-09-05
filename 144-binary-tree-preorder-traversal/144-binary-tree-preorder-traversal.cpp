/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        TreeNode* curr=root;
        stack<TreeNode*> st;
        
        while(curr!=NULL || !st.empty()){
            while(curr!=NULL){
                res.push_back(curr->val);
                if(curr->right!=NULL)
                    st.push(curr->right);
                curr=curr->left;
            }
            if(!st.empty())
            {
                curr=st.top();
                st.pop();
            }
        }
        
        return res;
    }
};