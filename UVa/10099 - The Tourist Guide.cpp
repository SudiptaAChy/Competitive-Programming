#include<bits/stdc++.h>
using namespace std;
int adj[109][109];
main()
{
    int n,r,u,v,w;
    int n1,n2,p;
    int cs=1,ans;
    while(scanf("%d%d",&n,&r) && n!=0 && r!=0)
    {
        for(int i=0;i<109;i++) for(int j=0;j<109;j++) adj[i][j]=INT_MIN;
        while(r--)
        {
            scanf("%d%d%d",&u,&v,&w);
            adj[u][v]=w;
            adj[v][u]=w;
        }
        scanf("%d%d%d",&n1,&n2,&p);

        ///algo
        for(int k=1;k<=n;k++)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    adj[i][j]=max(adj[i][j],min(adj[i][k],adj[k][j]));
                }
            }
        }
        ///

        adj[n1][n2]-=1;
        ans=ceil(p*1.0/adj[n1][n2]);
        printf("Scenario #%d\n",cs++);
        printf("Minimum Number of Trips = %d\n\n",ans);
    }
}
