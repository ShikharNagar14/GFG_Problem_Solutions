

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
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


//Function to return a list containing the level order traversal in spiral form.
void solve(Node* root,vector<int>&v){
     if(root==NULL){
        return;
    }
    stack<Node*>st1;
    stack<Node*>st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
        Node* temp=st1.top();
        st1.pop();
        v.push_back(temp->data);
        if(temp->right){
            st2.push(temp->right);
        }
        if(temp->left){
            st2.push(temp->left);
        }
    }
    while(!st2.empty()){
        Node* temp=st2.top();
        st2.pop();
        v.push_back(temp->data);
        if(temp->left){
            st1.push(temp->left);
        }
        if(temp->right){
            st1.push(temp->right);
        }
    }
}
}
vector<int> findSpiral(Node *root)
{
    //Your code here
     vector<int>v;
    solve(root,v);
    
    return v;
    
}
