#include <vector>
#include <stack>
#include <iostream>
using namespace std;

void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited, stack<int>& topo) {
    visited[node] = true;
    for (int neighbor : adj[node])
        if (!visited[neighbor])
            dfs(neighbor, adj, visited, topo);
    topo.push(node);
}

int main() {
    int n = 0;
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);
    stack<int> topo;
    for (int i = 0; i < n; ++i)
        if (!visited[i])
            dfs(i, adj, visited, topo);
    return 0;
}
