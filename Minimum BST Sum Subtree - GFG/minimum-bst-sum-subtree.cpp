//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

    Node *buildTree(string s) {
        if (s.length() == 0 || s[0] == 'N') return NULL;

        // Create the root of the tree
        vector<string> str;
        istringstream iss(s);
        for (string s; iss >> s;) str.push_back(s);
        Node *root = new Node(stoi(str[0]));

        // Push the root to the queue
        queue<Node*> q;
        q.push(root);

        // Starting from the second element
        int i = 1;
        while (q.size() > 0 && i < str.size()) {

            // Get and remove the front of the queue
            Node *currNode = q.front();
            q.pop();

            // Get the current node's value from the string
            string currVal = str[i];

            // If the left child is not null
            if (currVal != "N") {

                // Create the left child for the current node
                currNode->left = new Node(stoi(currVal));
                // Push it to the queue
                q.push(currNode->left);
            }

            // For the right child
            i++;
            if (i >= str.size()) break;

            currVal = str[i];

            // If the right child is not null
            if (currVal != "N") {

                // Create the right child for the current node
                currNode->right = new Node(stoi(currVal));

                // Push it to the queue
                q.push(currNode->right);
            }
            i++;
        }

        return root;
    }

    void inorder(Node *root) {
        if (root == NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minSubtreeSum = INT_MAX;

    int minSubtreeSumBST(int target, Node* root) {
        minSubtreeSum = INT_MAX;
        solve(root, target);
        if (minSubtreeSum == INT_MAX) {
            return -1;
        }
        return minSubtreeSum;
    }
    
    bool checkBST(Node* root, int minVal, int maxVal) {
        if (root == nullptr) {
            return true;
        }
        if (root->data < minVal || root->data > maxVal) {
            return false;
        }
        return checkBST(root->left, minVal, root->data - 1) && checkBST(root->right, root->data + 1, maxVal);
    }
    
    int getSum(Node* root, int* count) {
        if (root == nullptr) {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr) {
            count[0]++;
            return root->data;
        }
        count[0]++;
        return root->data + getSum(root->left, count) + getSum(root->right, count);
    }
    
    void solve(Node* root, int target) {
        if (root == nullptr) {
            return;
        }
        if (root->left == nullptr && root->right == nullptr) {
            if (root->data == target) {
                minSubtreeSum = 1;
                return;
            }
        }
        if (checkBST(root, INT_MIN, INT_MAX)) {
            int count[] = {0};
            int sum = getSum(root, count);
            if (sum == target) {
                minSubtreeSum = std::min(minSubtreeSum, count[0]);
            }
        }
        solve(root->left, target);
        solve(root->right, target);
    }
};

//{ Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int target;
        cin>>target;
        string str;
        getline(cin,str);
        getline(cin,str);
        Node node(0);
        Node *root = node.buildTree(str);
        Solution ob;
        int res = ob.minSubtreeSumBST(target, root);
        cout<<res<<endl;
    }
    return 0;
}
// } Driver Code Ends