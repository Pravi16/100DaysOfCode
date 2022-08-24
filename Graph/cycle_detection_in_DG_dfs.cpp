class Solution{
    public:
    bool compute(int i,vector<int>adj[],vector<int>&vis,vector<int>&dfsVis)
    {
        vis[i]=dfsVis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                if(compute(it,adj,vis,dfsVis)) return true;
            }
            else if(dfsVis[it]) return true;
        }
        dfsVis[i]=0;
        return false;
    }
    bool isCyclic(vector<int>adj[],int n) 
    {
        vector<int>vis(n),dfsVis(n);
        for(int i=0;i<n;i++)
        {
            if(!vis[i]) 
            {
                if(compute(i,adj,vis,dfsVis)) return true;
            }
        }
        return false;
    }
}
