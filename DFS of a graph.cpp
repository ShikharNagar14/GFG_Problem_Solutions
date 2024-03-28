class Solution {
  public:
   int dfsRec(int s,int V,vector<int> adj[],vector<bool>&vis,vector<int>&res){
    
       vis[s]=true;
       res.push_back(s);
       for(auto nbr:adj[s]){
           if(vis[nbr]==false){
               dfsRec(nbr,V,adj,vis,res);
           }
       }
   }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>vis(V,false);
        vector<int>res;
        for(int i=0;i<V;i++){
            if(vis[i]==false){
                dfsRec(i,V,adj,vis,res);
            }
        }return res;
    }
};
