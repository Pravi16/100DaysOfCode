class Solution{
    public:
    bool isCyclic(vector<int>adj[],int n) 
    {
        int cnt=0;
        queue<int>q;
        vector<int>deg(n);
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i]) deg[it]++;
        }
        for(int i=0;i<n;i++)
        {
            if(!deg[i]) q.push(i);
        }
        while(!q.empty())
        {
            int curNode=q.front();
            q.pop();
            cnt++;
            for(auto it:adj[curNode])
            {
                deg[it]--;
                if(!deg[it]) q.push(it);
            }
        }
        if(cnt==n) return false;
        return true;
    }
}
