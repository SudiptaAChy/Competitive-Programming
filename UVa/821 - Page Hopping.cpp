#include<bits/stdc++.h>
#define mx 109
using namespace std;
int n;
int adj[mx][mx];
void st()
{
    for(int i=0;i<mx;i++)
        for(int j=0;j<mx;j++)
            adj[i][j]=109;
}
main()
{
    int u,v,a,b,cs=1;
    double ans;
    int sum,pr;
    while(1)
    {
        n=0;
        st();
        sum=0,pr=0;
        scanf("%d%d",&a,&b);
        if(a==0 && b==0) break;
        n=max(n,a);
        n=max(n,b);
        adj[a][b]=1;
        while(scanf("%d%d",&u,&v))
        {
            if(u==0 && v==0) break;
            adj[u][v]=1;
            n=max(n,u);
            n=max(n,v);
        }

        for (int k = 0; k < 105; k++)
			for (int i = 0; i < 105; i++)
				for (int j = 0; j < 105; j++)
					adj[i][j] = min(adj[i][j],
							adj[i][k] + adj[k][j]);

        for(int i=1;i<105;i++)
        {
            for(int j=1;j<105;j++)
            {
                if(i!=j && adj[i][j]!=109)
                {
                    sum+=adj[i][j];
                    pr++;
                }
            }
        }
        ans=sum*1.0/pr;
        printf("Case %d: average length between pages = %.3lf clicks\n",cs++,ans);
    }
}
