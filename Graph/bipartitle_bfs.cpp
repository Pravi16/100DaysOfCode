class Solution {
public:
    bool compute(int i,int color[],vector<vector<int>>&graph)
    {
        queue<int>q;
        color[i]=1;
        q.push(i);
        while(!q.empty())
        {
            int curNode=q.front();
            q.pop();
            for(auto it:graph[curNode])
            {
                if(color[it]==-1)
                {
                    color[it]=1-color[curNode];
                    q.push(it);
                }
                else if(color[it]==color[curNode]) return false;
            }
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