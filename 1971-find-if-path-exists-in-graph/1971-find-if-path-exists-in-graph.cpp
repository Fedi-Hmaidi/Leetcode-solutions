class Solution {
public:
    vector<bool>vis;
    vector<vector<int>>nodes;
    
    void dfs(int d){
        if(vis[d])return ;
        vis[d]=true;
        for(auto & node:nodes[d]){
            dfs(node);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vis=vector<bool>(n,false);
        nodes=vector<vector<int>>(n);
        for(auto&edge:edges){
            int u= edge[0];
            int v =edge[1];
            nodes[u].push_back(v);
            nodes[v].push_back(u);
        }
        dfs(source);
        return vis[destination];
    }
};