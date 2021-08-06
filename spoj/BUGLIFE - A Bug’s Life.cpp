#include<bits/stdc++.h>
#define mx 2999
#define pb push_back
#define CHELE 1
#define MEYE 2
using namespace std;
int gender[mx];
vector<int>adj[mx];
bool homo;
void bfs(int st)
{
    gender[st]=CHELE;
    queue<int>q;
    q.push(st);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int sz=adj[x].size();
        for(int i=0;i<sz;i++)
        {
            int v=adj[x][i];
            if(gender[v]==0)
            {
                if(gender[x]==CHELE)
                    gender[v]=MEYE;
                else
                    gender[v]=CHELE;
                q.push(v);
            }
            else
            {
                if(gender[x]==gender[v])
                    homo=true;
            }
        }
    }
}
main()
{
    int t,n,m,u,v;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        homo=false;
        for(int i=0;i<mx;i++) adj[i].clear();
        memset(gender,0,sizeof gender);
        scanf("%d%d",&n,&m);
        while(m--)
        {
            scanf("%d%d",&u,&v);
            adj[u].pb(v);
            adj[v].pb(u);
        }

        for(int i=1;i<=n;i++)
            if(gender[i]==0) bfs(i);
        printf("Scenario #%d:\n",cs);
        if(homo==true) printf("Suspicious bugs found!\n");
        else printf("No suspicious bugs found!\n");
    }
}
