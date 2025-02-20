class Solution {
public:
  class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) : parent(n + 1), rank(n + 1, 0) {
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int x) {
        return parent[x] == x ? x : parent[x] = find(parent[x]);
    }
    
    bool unite(int x, int y) {
        int rootX = find(x), rootY = find(y);
        if (rootX == rootY) return false;
        if (rank[rootX] > rank[rootY]) parent[rootY] = rootX;
        else if (rank[rootX] < rank[rootY]) parent[rootX] = rootY;
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        return true;
    }
};

vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    DSU dsu(edges.size());
    for (auto &edge : edges)
        if (!dsu.unite(edge[0], edge[1])) return edge;
    return {};
}

};