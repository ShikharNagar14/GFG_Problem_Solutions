/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>v;
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
          Node* curr=q.front();
          q.pop();
          v.push_back(curr->data);
          if(curr->left){
              q.push(curr->left);
          }
          if(curr->right){
              q.push(curr->right);
          }
      }return v;
    }
};
