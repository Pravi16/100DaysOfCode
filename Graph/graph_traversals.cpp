#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void computeDFS(int node,vector<int>&vis,vector<int>adj[],vector<int>&dfs);
void printAdjList(vector<int>adj[],int node)
{
    for(int i=1;i<=node;i++)
    {
        cout<<i<<"-->";
        for(auto j:adj[i]) cout<<j<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void printVector(vector<int>&ans)
{
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
}
void bfs(vector<int>adj[],int node)
{
    vector<int>bfs;
    vector<int>vis(node+1);
    for(int i=1;i<=node;i++)
    {
        if(!vis[i])
        {
            queue<int>q;
            q.push(i);
            vis[i]=1;
            while(!q.empty())
            {
                int curNode=q.front();
                q.pop();
                bfs.push_back(curNode);
                for(auto it:adj[curNode])
                {
                    if(!vis[it])
                    {
                        vis[it]=1;
                        q.push(it);
                    }
                }
            }
        }
    }
    printVector(bfs);
}
void dfs(vector<int>adj[],int node)
{
    vector<int>dfs;
    vector<int>vis(node+1);
    for(int i=1;i<=node;i++)
    {
        if(!vis[i]) computeDFS(i,vis,adj,dfs);
    }
    printVector(dfs);
}
void computeDFS(int node,vector<int>&vis,vector<int>adj[],vector<int>&dfs)
{
    vis[node]=1;
    dfs.push_back(node);
    for(auto it:adj[node])
    {
        if(!vis[it]) computeDFS(it,vis,adj,dfs);
    }
}
int main()
{
    int node,edges;
    cin>>node>>edges;
    vector<int>adj[node+1];
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    printAdjList(adj,node);
    bfs(adj,node);
    dfs(adj,node);
}