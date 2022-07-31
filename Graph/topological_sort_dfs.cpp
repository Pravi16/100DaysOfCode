//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void compute(int i,vector<int>&vis,stack<int>&st,vector<int>adj[])
	{
	    vis[i]=1;
	    for(auto it:adj[i])
	    {
	        if(!vis[it]) compute(it,vis,st,adj);
	    }
	    st.push(i);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>vis(V);
	    stack<int>st;
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i]) compute(i,vis,st,adj);
	    }
	    vector<int>ans;
	    while(!st.empty())
	    {
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};