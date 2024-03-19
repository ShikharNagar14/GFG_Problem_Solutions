//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        bool visited[v+1];
        for(int i=0;i<v;i++){
            visited[i]=false;
        }
        vector<int>res;
        queue<int>q;
        int s=0;
        visited[s]=true;
        q.push(s);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            res.push_back(curr);
            for(int nbr:adj[curr]){
                if(!visited[nbr]){
                    visited[nbr]=true;
                     q.push(nbr);
                   
                }
                
            }
        }return res;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
