#include<bits/stdc++.h>
#define pb push_back
#define mx 1009
using namespace std;
vector<int>adj[mx];
int a[mx];
bool visited[mx];
long long sum,sum1,ppl;
void dfs(int st)
{
    visited[st]=true;
    sum1+=a[st-1];
    ppl++;
    int sz=adj[st].size();
    for(int i=0;i<sz;i++)
    {
        int v=adj[st][i];
        if(visited[v]==false)
            dfs(v);
    }
}
main()
{
    int t,u,v,n,m;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        for(int i=0;i<mx;i++) adj[i].clear();
        memset(visited,false,sizeof visited);
        sum=0;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        while(m--)
        {
            scanf("%d%d",&u,&v);
            adj[u].pb(v);
            adj[v].pb(u);
        }
        printf("Case %d: ",cs);
        if(sum%n!=0)
        {
            printf("No\n");
        }
        else
        {
            int ok=0;
            int money=sum/n;
            for(int i=1;i<=n;i++)
            {
                if(visited[i]==false)
                {
                    sum1=0;
                    ppl=0;
                    dfs(i);
                    int vag=sum1/ppl;
                    if(sum1%ppl!=0)
                    {
                        ok=1;
                        break;
                    }
                    else
                    {
                        if(money!=vag)
                        {
                            ok=1;
                            break;
                        }
                    }
                }
            }
            if(ok==0) printf("Yes\n");
            else printf("No\n");
        }
    }
}
