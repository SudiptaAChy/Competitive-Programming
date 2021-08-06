#include<bits/stdc++.h>
#define mx 1009
using namespace std;
vector<int>adj[mx];
void clr()
{
    for(int i=0;i<mx;i++)
    {
        adj[i].clear();
    }
}
void bfs(int st,int dis[])
{
    queue<int>q;
    dis[st]=0;
    q.push(st);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<adj[x].size();i++)
        {
            int y=adj[x][i];
            if(dis[y]==-1)
            {
                q.push(y);
                dis[y]=dis[x]+1;
            }
        }
    }
}
main()
{
    int t,n,m,u,v,s,d;
    int d1[mx],d2[mx];
    int ma;
    cin>>t;
    for(int cas=1;cas<=t;cas++)
    {
        ma=0;
        clr();
        memset(d1,-1,sizeof d1);
        memset(d2,-1,sizeof d2);
        cin>>n>>m;
        while(m--)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cin>>s>>d;
        bfs(s,d1);
        bfs(d,d2);
        for(int i=0;i<mx;i++)
            ma=max(ma,(d1[i]+d2[i]));
        printf("Case %d: %d\n",cas,ma);
    }
}
