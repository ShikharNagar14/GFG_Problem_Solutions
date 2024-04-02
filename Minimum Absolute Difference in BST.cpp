/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

};
*/

class Solution
{
    public:
    void solve(Node* root ,vector<int>&v){
        if(!root){
            return;
        }
        solve(root->left,v);
        v.push_back(root->data);
        solve(root->right,v);
    }
    int absolute_diff(Node *root)
    {
        //Your code here
        int mindiff=INT_MAX;
        vector<int>v;
        solve(root,v);
        for(int i=1;i<v.size();i++){
            int d=abs(v[i-1]-v[i]);
            mindiff=min(mindiff,d);
        }
        return mindiff;
        
    }
};
