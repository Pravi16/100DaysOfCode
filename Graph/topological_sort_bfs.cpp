//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    queue<int>q;
	    vector<int>deg(V);
	    vector<int>ans;
	    for(int i=0;i<V;i++)
	    {
	        for(auto it:adj[i]) deg[it]++;
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(!deg[i]) q.push(i);
	    }
	    while(!q.empty())
	    {
	        int curNode=q.front();
	        q.pop();
	        ans.push_back(curNode);
	        for(auto it:adj[curNode])
	        {
	            deg[it]--;
	            if(!deg[it]) q.push(it);
	        }
	    }
	    return ans;
	}
};