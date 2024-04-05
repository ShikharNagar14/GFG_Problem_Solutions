// User function Template for C++

// Function to find the minimum element in the given BST.

/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/

class Solution {
  public:
   vector<int>v;
   void solve(Node* root){
       if(!root){
           return;
       }
       solve(root->left);
       v.push_back(root->data);
       solve(root->right);
   }
   
    int minValue(Node* root) {
        // Code here
       solve(root);
       return v[0];
    }
};
