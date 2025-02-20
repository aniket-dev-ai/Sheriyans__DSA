class Solution {
public:
        int dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == 0)
            return 0; // Base case: out of bounds or land cell
        
        int fish = grid[r][c]; // Catch fish at the current cell
        grid[r][c] = 0;        // Mark cell as visited

        // Explore all 4 directions
        fish += dfs(grid, r + 1, c); // Down
        fish += dfs(grid, r - 1, c); // Up
        fish += dfs(grid, r, c + 1); // Right
        fish += dfs(grid, r, c - 1); // Left

        return fish;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int maxFish = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] > 0) { // Start DFS from water cells
                    maxFish = max(maxFish, dfs(grid, i, j));
                }
            }
        }

        return maxFish;
    }
};