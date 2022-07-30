class Solution{
    public:
    bool compute(int i,int vis[],int dfsVis[],vector<int>adj[])
    {
        vis[i]=1;
        dfsVis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it]) 
            {
                if(compute(it,vis,dfsVis,adj)) return true;
            }
            else if(dfsVis[it]) return true;
        }
        dfsVis[i]=0;
        return false;
    }
    bool isCyclic(vector<int>adj[],int n)
    {
        int vis[n],dfsVis[n];
        memset(vis,0,sizeof vis);
        memset(dfsVis,0,sizeof dfsVis);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(compute(i,vis,dfsVis,adj)) return true;
            }
        }
        return false;
    }
}