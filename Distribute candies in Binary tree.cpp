int fun(Node* root,int &moves){
        if(root==NULL){
            return 0;
        }
        int left=fun(root->left,moves);
        int right=fun(root->right,moves);
        moves+=(abs(left)+abs(right));
        return (root->key+(left+right)-1);
    }
    int distributeCandy(Node* root)
    {
        //code here
        int moves=0;
        fun(root,moves);
        return moves;
    }
