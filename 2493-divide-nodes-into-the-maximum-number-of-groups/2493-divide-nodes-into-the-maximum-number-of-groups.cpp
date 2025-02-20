class Solution {
public:
    vector<int> parent, rank;

    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x), rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) parent[rootY] = rootX;
            else if (rank[rootX] < rank[rootY]) parent[rootX] = rootY;
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }

    int bfsMaxDepth(int start, vector<vector<int>>& graph) {
        queue<int> q;
        unordered_map<int, int> depth;
        q.push(start);
        depth[start] = 1;
        int maxDepth = 1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int neighbor : graph[node]) {
                if (depth.count(neighbor) == 0) {
                    depth[neighbor] = depth[node] + 1;
                    maxDepth = max(maxDepth, depth[neighbor]);
                    q.push(neighbor);
                }
            }
        }
        return maxDepth;
    }

    bool isBipartite(int node, vector<vector<int>>& graph, vector<int>& color) {
        queue<int> q;
        q.push(node);
        color[node] = 1;

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int v : graph[u]) {
                if (color[v] == -1) {
                    color[v] = 1 - color[u];
                    q.push(v);
                } else if (color[v] == color[u]) {
                    return false;
                }
            }
        }
        return true;
    }

    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n + 1);
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 1; i <= n; i++) parent[i] = i;

        for (auto& e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
            unite(e[0], e[1]);  
        }

        vector<int> color(n + 1, -1);
        for (int i = 1; i <= n; i++) {
            if (color[i] == -1 && !isBipartite(i, graph, color)) return -1;
        }

        unordered_map<int, int> componentMaxDepth;
        for (int i = 1; i <= n; i++) {
            int root = find(i);
            if (componentMaxDepth.count(root) == 0) {
                componentMaxDepth[root] = bfsMaxDepth(i, graph);
            } else {
                componentMaxDepth[root] = max(componentMaxDepth[root], bfsMaxDepth(i, graph));
            }
        }

        int maxGroups = 0;
        for (auto& [_, maxDepth] : componentMaxDepth) {
            maxGroups += maxDepth;
        }
        return maxGroups;
    }
};
