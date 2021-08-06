#include<bits/stdc++.h>
#define pii pair<int,int>
#define sz 100009
using namespace std;
vector<pii>v[sz];
int dis[sz];
void clr(void)
{
    for(int i=0;i<sz;i++)
    {
        v[i].clear();
        dis[i]=INT_MAX;
    }
}
void dijkstra(int s)
{
    priority_queue< pii, vector<pii>, greater<pii> >pq;
    pq.push(make_pair(0,s));
    dis[s]=0;
    while(!pq.empty())
    {
        pii top=pq.top();
        pq.pop();
        int d=top.first,u=top.second;
        for(auto it : v[u])
        {
            int v1=it.first,v2=it.second;
            if(max(dis[u],v2)<dis[v1])
            {
                dis[v1]=max(dis[u],v2);
                pq.push(make_pair(dis[v1],v1));
            }
        }
    }
}
main()
{
    int t,n,m,ct,x,y,w;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        clr();
        printf("Case %d:\n",cs);
        scanf("%d%d",&n,&m);
        for(int j=0;j<m;j++)
        {
            scanf("%d%d%d",&x,&y,&w);
            v[x].push_back(make_pair(y,w));
            v[y].push_back(make_pair(x,w));
        }
        scanf("%d",&ct);
        dijkstra(ct);
        for(int i=0;i<n;i++)
        {
            if(dis[i]==INT_MAX) puts("Impossible");
            else printf("%d\n",dis[i]);
        }
    }
}
