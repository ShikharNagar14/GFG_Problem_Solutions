/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
   int height(Node* root){
       if(root==NULL){
           return 0;
       }
       int x=height(root->left);
       int y=height(root->right);
       if(x==-1 || y==-1){
           return -1;
       }
       if(x!=y){
           if(x!=0 and y!=0){
           return -1;
           }
       }
       int a=max(x,y);
       return a+1;
   }
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
        if(height(root)==-1){
            return false;
        }
        return true;
    }
};
