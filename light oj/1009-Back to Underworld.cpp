#include<bits/stdc++.h>
#define mx 1000009
#define WHITE 1
#define BLACK 2
using namespace std;
bool visited[mx];
vector<int>val;
void bfs(vector<int>v[],int u)
{
    queue<int>q;
    visited[u]=true;
    q.push(u);
    while(!q.empty())
    {
        int x=q.front();
        val.push_back(x);
        q.pop();
        for(int i=0;i<v[x].size();i++)
        {
            if(visited[i]==false)
            {
                q.push(v[x][i]);
                visited[v[x][i]]=true;
            }
        }
    }
}
main()
{
    int t,cas,u,v,x,y,st;
    int n;
    cin>>t;
    for(cas=1;cas<=t;cas++)
    {
        vector<int>g[mx];
        memset(visited,false,sizeof visited);
        val.clear();
        cin>>n;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
        n-=1;
        while(n--)
        {
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        bfs(g,x);
        for(int i=0;i<val.size();i++)
            cout<<val[i]<<" ";
        cout<<endl;
    }
}
