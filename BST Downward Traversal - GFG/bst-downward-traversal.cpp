//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};




// } Driver Code Ends
//User function Template for C++
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
public:
    long long int verticallyDownBST(Node *root,int target){
        // Code here
        std::vector<Node*> targetNode(1);
        std::vector<int> pos(1);
        searchTarget(root, pos, 0, target, targetNode);
        if (targetNode[0] == nullptr)
        {
            return -1;
        }
        std::vector<long> ans(1);
        findDescendantSum(pos[0], pos[0], ans, targetNode[0]);
        return ans[0] - targetNode[0]->data;
    }
    private:
    void searchTarget(Node* &root, std::vector<int> &pos, int level, int target, std::vector<Node*> &targetNode)
    {
        if (root == nullptr)
        {
            return;
        }
        if (root->data == target)
        {
            targetNode[0] = root;
            pos[0] = level;
            return;
        }
        else if (target < root->data)
        {
            searchTarget(root->left, pos, level - 1, target, targetNode);
        }
        else if (target > root->data)
        {
            searchTarget(root->right, pos, level + 1, target, targetNode);
        }
    }
    void findDescendantSum(int targetPos, int curPos, std::vector<long> &ans, Node* &root)
    {
        if (root == nullptr)
        {
            return;
        }
        if (targetPos == curPos)
        {
            ans[0] += root->data;
        }
        findDescendantSum(targetPos, curPos - 1, ans, root->left);
        findDescendantSum(targetPos, curPos + 1, ans, root->right);
    }
};

//{ Driver Code Starts.

// Function to Build Tree
Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));

   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}

void inorder(Node *root, vector<int> &v)
{
    if(root==NULL)
        return;

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

int main() {
 
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
        int target;
        cin>>target;
        string newline;
        getline(cin,newline);
        string s; 
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout<<ob.verticallyDownBST(root, target)<<endl;
   }
   return 0;
}
// } Driver Code Ends