//User function template for C++

/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
*/

class Solution{
  public:
  vector<int>v;
  int i=0;
  void inorder(Node* root){
      if(root==NULL){
          return;
      }
      inorder(root->left);
      v.push_back(root->data);
      inorder(root->right);
  }
  void solve(Node* root){
     
      if(root==NULL){return;
          
      }
      solve(root->left);
      root->data=v[i++];
      solve(root->right);
      
  }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        inorder(root);
        sort(v.begin(),v.end());
        solve(root);
        return root;
       
        
    }
};
