/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */


class Solution
{
    public:
        /*You are required to complete below method */
        int sumOfLeafNodes(Node *node ){
             /*Your code here */
              if(node==NULL){
                 return 0;
             }
             if(node->left==NULL && node->right==NULL){
                 return node->data;
             }
             return sumOfLeafNodes(node->left)+sumOfLeafNodes(node->right);
            
        }
};
