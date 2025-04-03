#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> &maze, vector<vector<bool>> &visited, int n)
{
    return (x >= 0 && y >= 0 && x < n && y < n && maze[x][y] == 1 && !visited[x][y]);
}

void solve(vector<vector<int>> &maze, vector<vector<bool>> &visited, int n, vector<string> &ans, int x, int y, string path)
{
    if (x == n - 1 && y == n - 1)
    { // Reached destination
        ans.push_back(path);
        return;
    }

    visited[x][y] = true;

    // Down
    if (isSafe(x + 1, y, maze, visited, n))
        solve(maze, visited, n, ans, x + 1, y, path + 'D');
    // Right
    if (isSafe(x, y + 1, maze, visited, n))
        solve(maze, visited, n, ans, x, y + 1, path + 'R');
    // Up
    if (isSafe(x - 1, y, maze, visited, n))
        solve(maze, visited, n, ans, x - 1, y, path + 'U');
    // Left
    if (isSafe(x, y - 1, maze, visited, n))
        solve(maze, visited, n, ans, x, y - 1, path + 'L');

    visited[x][y] = false; // Backtrack
}

void testMaze(vector<vector<int>> &maze, int testCaseNum)
{
    int n = maze.size();
    vector<string> paths;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
 
    if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
    {
        cout << "No path found!\n\n";
        return;
    }

    solve(maze, visited, n, paths, 0, 0, "");

    if (paths.empty())
    {
        cout << "No path found!\n\n";
    }
    else
    {
        cout << "Possible Paths:\n";
        for (string path : paths)
        {
            cout << path << endl;
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<vector<int>>> testCases = {
        {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}}, // Test 1
        {{1, 1, 1}, {0, 0, 1}, {1, 1, 1}},                        // Test 6
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}},                        // Test 7 
        {{1, 1, 1, 1, 1}},                                        // Test 13
        {{1}, {1}, {1}, {1}, {1}},                                // Test 14
    };

    for (int i = 0; i < testCases.size(); i++)
    {
        cout << "Test Case " << i + 1 << ":\n";
        testMaze(testCases[i], i + 1);
        cout << "------------------------\n";
    }

    return 0;
}
