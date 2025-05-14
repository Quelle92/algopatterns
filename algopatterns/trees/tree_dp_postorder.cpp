#include <vector>
#include <iostream>
using namespace std;

int dfs(int node, int parent, const vector<vector<int>>& tree) {
    int result = 0;
    for (int child : tree[node]) {
        if (child == parent) continue;
        result += dfs(child, node, tree);
    }
    return result;
}

int main() {
    int n = 0;
    vector<vector<int>> tree(n);
    int root = 0;
    cout << dfs(root, -1, tree) << endl;
    return 0;
}
