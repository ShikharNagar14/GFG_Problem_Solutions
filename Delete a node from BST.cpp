// Function to delete a node from BST.
Node* solve(Node* c){
    c=c->right;
    while(c!=NULL && c->left!=NULL){
        c=c->left;
    }return c;
}
Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(root==NULL){
        return root;
    }
    else if(root->data<X){
        root->right=deleteNode(root->right,X);
    }
    else if(root->data>X){
        root->left=deleteNode(root->left,X);
    }
    else {
        if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        else{
            Node* c=solve(root);
            root->data=c->data;
            root->right=deleteNode(root->right,c->data);
        }
    }return root;
    
    
}
