

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool compute(int cur,int prev,vector<int>adj[],vector<int>&vis)
    {
        vis[cur]=1;
        for(auto i:adj[cur])
        {
            if(!vis[i])
            {
                if(compute(i,cur,adj,vis)) return true;
            }
            else if(i!=prev) return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>vis(V); // starting with 0
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(compute(i,-1,adj,vis)) return true;
            }
        }
        return false;
    }
};