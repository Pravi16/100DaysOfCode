class Solution {
public:
    bool compute(int i,int color[],vector<vector<int>>&graph)
    {
        if(color[i]==-1) color[i]=1;
        for(auto it:graph[i])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[i];
                if(!compute(it,color,graph)) return false;
            }
            else if(color[it]==color[i]) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int color[n];
        memset(color,-1,sizeof color);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1) if(!compute(i,color,graph)) return false;
        }
        return true;
    }
};