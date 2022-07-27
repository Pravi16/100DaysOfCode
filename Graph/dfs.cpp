#include<iostream>
#include<vector>
using namespace std;

void compute(int i,vector<int>&vis,vector<int>adj[],vector<int>&ans)
{
    ans.push_back(i);
    vis[i]=1;
    for(auto j:adj[i])
    {
        if(!vis[j]) compute(j,vis,adj,ans);
    }
}
vector<int> dfs(int V,vector<int>adj[])
{
    vector<int>ans;
    vector<int>vis(V+1);
    for(int i=1;i<V;i++)
    {
        if(!vis[i]) compute(i,vis,adj,ans);
    }
    return ans;
}