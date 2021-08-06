#include<bits/stdc++.h>
#define sz 123456
using namespace std;
vector< pair<int,int> >adj[sz];
bool vis[sz];
int dis1[sz],dis2[sz],dis3[sz],node;
void st()
{
    for(int i=0;i<sz;i++)
    {
        dis1[i]=-1;
        dis2[i]=-1;
        dis3[i]=-1;
        adj[i].clear();
    }
}
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    dis1[s]=0;
    int mx=-1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        if(dis1[u]>mx)
        {
            mx=dis1[u];
            node=u;
        }

        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].first;
            if(dis1[v]==-1)
            {
                dis1[v]=dis1[u]+adj[u][i].second;
                q.push(v);
            }
        }
    }
}
void bfs1(int s)
{
    queue<int>q;
    q.push(s);
    dis2[s]=0;
    int mx=-1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].first;
            if(dis2[v]==-1)
            {
                dis2[v]=dis2[u]+adj[u][i].second;
                q.push(v);
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        st();
        int n;
        scanf("%d",&n);
        for(int i=1;i<n;i++)
        {
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }
        bfs(0);
        memset(dis1,-1,sizeof dis1);
        bfs(node);
        bfs1(node);
        printf("Case %d:\n",cs);
        for(int i=0;i<n;i++) printf("%d\n",max(dis1[i],dis2[i]));
    }
    return 0;
}
