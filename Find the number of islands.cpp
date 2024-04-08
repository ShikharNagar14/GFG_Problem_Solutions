

class Solution {
public:
    void BFS(int row, int col, vector<vector<int>>& visited, vector<vector<char>>& grid) {
        visited[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        q.push({row, col});
        vector<pair<int,int>> directions = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for (auto dir : directions) {
                int newR = r + dir.first;
                int newC = c + dir.second;
                if (newR >= 0 && newR < n && newC >= 0 && newC < m && !visited[newR][newC] && grid[newR][newC] == '1') {
                    visited[newR][newC] = 1;
                    q.push({newR, newC});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();
        int cnt = 0;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    BFS(i, j, visited, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
