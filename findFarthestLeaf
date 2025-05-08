auto findFarthestLeaf = [&](int root) -> int {
        vis.assign(N,false);
        int farthestNode = root;
        int maxHeight = 0;
        function<void(int,int)> dfsLeaf = [&](int node , int height){
            vis[node] = true;
            bool isLeaf = true;
            for(auto i : adj[node]){
                if(!vis[node]){
                    isLeaf = false;
                    dfs(i , height + 1);
                }
            }
            if(isLeaf && height >= maxHeight){
                maxHeight = height;
                farthestNode = node;
            }
        };
        dfs(root , 0);
        return farthestNode;
    }
