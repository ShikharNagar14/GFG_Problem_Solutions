/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    int fun(Node* root,bool &ans){
        if(root==NULL){
            return 0;
            }
        if(root->left==NULL && root->right==NULL ){
            return root->data;
        }
        int lh=fun(root->left,ans);
        int rh=fun(root->right,ans);
        if(lh+rh!=root->data){
            ans=false;
        }
        return root->data;
    }
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
    bool ans=true;
    fun(root,ans);
    return ans;
    }
};
