/*The Node structure is defined as
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

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    public:
    void solve(Node* root,vector<int>&v){
         if(root==NULL){
            return ;
        }
        solve(root->left,v);
        v.push_back(root->data);
        solve(root->right,v);
        
    }
    int kthLargest(Node *root, int k)
    {
        //Your code here
        vector<int>v;
       solve(root,v);
       reverse(v.begin(),v.end());
      if(k>v.size()){
          return -1;
      }
      for(int i=0;i<v.size();i++){
          if((i+1)==k){
              return v[i];
          }
      }
      
     
       
       
    }
};
