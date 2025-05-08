const int N = 1e6;
vvii adj(N);
vii depth(N);
vii height(N);
vbl vis(N);
vii parent(N);

void dfs(int node, int par = -1) {
    vis[node] = true;
    parent[node] = par;
    int maxHeight = 0;
    for(auto i : adj[node]){
        if(!vis[i]){
            depth[i] = depth[node] + 1;
            dfs(i, node);
            maxHeight = max(maxHeight, height[i] + 1);
        }
    }
    height[node] = maxHeight;
}
