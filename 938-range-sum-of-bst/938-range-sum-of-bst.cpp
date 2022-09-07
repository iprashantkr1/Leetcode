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
    int rangeSumBST(TreeNode* root, int low, int high)
    {
        queue<TreeNode*> q;
        q.push(root);
        int sum=0;
        while(root!=NULL && !q.empty()){
            TreeNode* t=q.front();
            q.pop();
            if(t->val>=low && t->val <=high)
                sum+=t->val;
            if(t->left !=NULL)
                q.push(t->left);
            if(t->right!=NULL)
                q.push(t->right);
        }
        return sum;
        
    }
};