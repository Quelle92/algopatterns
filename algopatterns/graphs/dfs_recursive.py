def dfs(node, adj, visited):
    visited[node] = True
    # -- INSERT ACTION ON NODE HERE --
    for neighbor in adj[node]:
        if not visited[neighbor]:
            dfs(neighbor, adj, visited)

if __name__ == "__main__":
    n = 0
    adj = [[] for _ in range(n)]
    visited = [False] * n
    dfs(0, adj, visited)
