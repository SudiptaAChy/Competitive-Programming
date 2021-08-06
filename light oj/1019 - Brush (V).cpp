#include<bits/stdc++.h>
#define INF 9999
using namespace std;
int adj[1009][1009];
void floyd(int n)
{
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
        }
    }
}
main()
{
    int t,n,m,u,v,w;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        for(int i=0;i<1009;i++) for(int j=0;j<1009;j++) adj[i][j]=INF;
        cin>>n>>m;
        while(m--)
        {
            cin>>u>>v>>w;
            adj[u][v]=min(adj[u][v],w);
            adj[v][u]=min(adj[v][u],w);
        }
        floyd(n);
        if(adj[1][n]!=INF) printf("Case %d: %d\n",cs,adj[1][n]);
        else printf("Case %d: Impossible\n",cs);
    }
}
