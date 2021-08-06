#include<bits/stdc++.h>
#define pb push_back
#define WHITE 1
#define BLACK 2
#define GREY 3
#define mx 1000009
using namespace std;
vector<int>adj[mx];
int color[mx],dis[mx];
void clr()
{
    for(int i=0;i<mx;i++)
    {
        adj[i].clear();
    }
}
void st(void)
{
    for(int i=0;i<mx;i++)
    {
        color[i]=WHITE;
        dis[i]=-1;
    }
}
void bfs(int s)
{
    dis[s]=0;
    queue<int>q;
    q.push(s);
    color[s]=BLACK;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(color[v]==WHITE)
            {
                q.push(v);
                dis[v]=dis[u]+1;
                color[v]=BLACK;
            }
        }
    }
}
main()
{
    int n,i,u,v,j;
    int n1,n2,total;
    int cas=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        total=0;
        clr();
        while(n--)
        {
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        while(1)
        {
            total=0;
            cin>>n1>>n2;
            if(n1==0 && n2==0)
                break;
            st();
            bfs(n1);
            for(int i=0;i<mx;i++)
            {
                if(dis[i]!=-1 && dis[i]>n2)
                {

                    total++;
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cas++,total,n1,n2);
        }
    }
}
