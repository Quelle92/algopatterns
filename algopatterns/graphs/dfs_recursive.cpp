#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    // -- INSERT ACTION ON NODE HERE --
    for (int neighbor : adj[node])
        if (!visited[neighbor])
            dfs(neighbor, adj, visited);
}

int main() {
    int n = 0;
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);
    dfs(0, adj, visited);
    return 0;
}
