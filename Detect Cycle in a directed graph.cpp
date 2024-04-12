class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool solve(int s,vector<int>&vis,vector<int>&restack,vector<int>adj[]){
        if(vis[s]==0){
            vis[s]=1;
            restack[s]=1;
            for(auto it:adj[s]){
                if(!vis[it] && solve(it,vis,restack,adj)){
                    return true;
                }
                else if(restack[it]){
                    return true;
                }
            }
        }
        restack[s]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>restack(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i] && solve(i,vis,restack,adj)){
                return true;
            }
        }
        return false;
    }
};

// time complexity : O(V+E)
// Space Complexity :O(V)
