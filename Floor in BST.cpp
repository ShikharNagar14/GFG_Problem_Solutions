// Function to search a node in BST.
class Solution{

public:
    int floor(Node* root, int x) {
        // Code here
        int res=-1;
        while(root!=NULL){
            if(root->data==x){
                return root->data;
            }
            else if(root->data>x){
                root=root->left;
            }
            else{
                res=root->data;
                root=root->right;
            }
        }return res;
    }
};
