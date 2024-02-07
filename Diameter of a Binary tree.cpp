/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
  int solve(Node* root,int &res){
      if(root==NULL){
          return 0;
      }
      int lh=solve(root->left,res);
      int rh=solve(root->right,res);
      res=max(res,1+lh+rh);
      return 1+max(lh,rh);
      
      
  }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int res=0;
        solve(root,res);
        return res;
    }
};
