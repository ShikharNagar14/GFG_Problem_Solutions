// User function template for C++

class Solution{
    public:
    int dx[4]={1,0,0,-1};
    int dy[4]={0,-1,1,0};
    string dirs="DLRU";
    bool isvalid(int i,int j,vector<vector<int>>&m,int n,vector<vector<bool>>&vis){
        if(i>=0 && i<n && j>=0 && j<n && m[i][j]==1 && vis[i][j]==0){
            return 1;
        }
        return 0;
    }
    void solve(int i,int j,vector<vector<int>>&m,int n,vector<vector<bool>>&vis,string &path,vector<string>&ans){
        if(i==n-1 && j==n-1){
            ans.push_back(path);
            return;
            
        }
        vis[i][j]=1;
        for(int k=0;k<4;k++){
            int new_i=i+dx[k];
            int new_j=j+dy[k];
            if(isvalid(new_i,new_j,m,n,vis)){
                path.push_back(dirs[k]);
                solve(new_i,new_j,m,n,vis,path,ans);
                path.pop_back();
            }
        }
        vis[i][j]=0;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        if(m[0][0]==0){
            return ans;
        }
        string path="";
        vector<vector<bool>>vis(n,vector<bool>(n,0));
        solve(0,0,m,n,vis,path,ans);
        return ans;
        
        
    }
};

    
