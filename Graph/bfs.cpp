#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;
template<typename T>
class graph{
    map<T,list<T>>mp;
    public:
    void addEdge(int a,int b)
    {
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    void bfs(T s)
    {
        map<T,int>vis;
        queue<T>q;
        q.push(s);
        vis[s]=true;
        while(!q.empty())
        {
            T temp=q.front();
            q.pop();
            cout<<temp<<" ";
            for(int i:mp[temp])
            {
                if(!vis[i]) 
                {
                    q.push(i);
                    vis[i]=true;
                }
            }
        }
    }
};
int main()  
{
    graph<int>g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);

    g.bfs(0);
    cout<<endl;
}