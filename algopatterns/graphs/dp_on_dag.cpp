#include <vector>
#include <iostream>
using namespace std;

vector<int> memo;

int dfs(int node, const vector<vector<int>>& adj) {
    if (memo[node] != -1)
        return memo[node];
    int result = 0;
    for (int neighbor : adj[node])
        result = max(result, 1 + dfs(neighbor, adj));
    return memo[node] = result;
}

int main() {
    int n = 0;
    vector<vector<int>> adj(n);
    memo.assign(n, -1);
    int max_result = 0;
    for (int i = 0; i < n; ++i)
        max_result = max(max_result, dfs(i, adj));
    cout << max_result << endl;
    return 0;
}
