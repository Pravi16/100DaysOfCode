class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool compute(int cur,int V,vector<int>adj[],vector<int>&vis)
    {
        queue<pair<int,int>>q;
        vis[cur]=true;
        q.push({cur,-1});
        while(!q.empty())
        {
            int node=q.front().first;
            int par=q.front().second;
            q.pop();
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=true;
                    q.push({it,node});
                }
                else if(par != it) return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>vis(V);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(compute(i,V,adj,vis)) return true;
            }
        }
        return false;
    }
};
