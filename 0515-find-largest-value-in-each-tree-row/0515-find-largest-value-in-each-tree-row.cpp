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
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        if(root==NULL)
            return {};
        
        queue<TreeNode*>q;
        q.push(root);
        int ctr=1;

        while(!q.empty()){

            int count=0;
            int rowMax=INT_MIN;
            for(int i=1;i<=ctr;i++){
                TreeNode* curr = q.front();
                q.pop();

                rowMax=max(rowMax,curr->val);

                if(curr->left){
                    q.push(curr->left);
                    count++;
                }

                if(curr->right){
                    q.push(curr->right);
                    count++;
                }
            }
            res.push_back(rowMax);
            ctr=count;
            
        }

        return res;
        
    }
};