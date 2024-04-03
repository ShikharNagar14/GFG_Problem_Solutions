//User function Template for C++

/*// A Tree node
struct Node
{
	int data;
	struct Node *left, *right;
};*/


class Solution
{
    public:
    void solve(Node* root,int k,int x,int y,vector<int>&ans){
        if(!root){
            return;
        }
        ans.push_back(root->data);
        if(root->data <x && root->data <y){
            solve(root->right,k,x,y,ans);
        }
        if(root->data > x && root->data>y){
            solve(root->left,k,x,y,ans);
        }
        return;
    }
    
    /*You are required to complete below function */
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        // your code goes here
        vector<int>ans;
        solve(root,k,x,y,ans);
        int n=ans.size();
        if(n<k){
            return -1;
        }
        return ans[n-k];
        
    }
};
// time complexity: O(height of tree)
// Space complexity : O(height of tree)
