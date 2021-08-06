#include<bits/stdc++.h>
#define mx 1009
#define pb push_back
using namespace std;
vector<int>adj[mx];
bool visited[mx];
int n,m,k,total;
int people[mx];
int dis1[mx],dis2[mx];
void clr()
{
    for(int i=0;i<mx;i++)
    {
        adj[i].clear();
        people[i]=0;
        dis1[i]=0;
    }
}
void dfs(int st,int ppl)
{
    visited[st]=true;
    dis1[st]+=ppl;
    int sz=adj[st].size();
    for(int i=0;i<sz;i++)
    {
        int v=adj[st][i];
        if(visited[v]==false)
        {
            visited[v]=true;
            dfs(v,ppl);
        }
    }
}
main()
{
    int t,val,u,v;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++)
    {
        clr();
        int ans=0;
        scanf("%d%d%d",&k,&n,&m);
        for(int i=0;i<k;i++) {scanf("%d",&val);people[val]++;}
        while(m--)
        {
            scanf("%d%d",&u,&v);
            adj[u].pb(v);
        }
        for(int i=1;i<mx;i++)
        {
            if(people[i]>0)
            {
                memset(visited,false,sizeof visited);
                dfs(i,people[i]);
            }
        }
        for(int i=1;i<mx;i++)
            if(dis1[i]>=k)
                ans++;
        printf("Case %d: %d\n",cas,ans);
    }
}
