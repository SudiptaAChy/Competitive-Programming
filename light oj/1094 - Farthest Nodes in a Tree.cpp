#include<bits/stdc++.h>
#define mx 100009
#define pb push_back
#define mp make_pair
using namespace std;
vector< pair<int,int> >adj[mx];
bool visited[mx];
int ma,again;
void dfs(int st,int wt)
{
    visited[st]=true;
    if(wt>ma)
    {
        ma=wt;
        again=st;
    }
    int sz=adj[st].size();
    for(int i=0;i<sz;++i)
    {
        int fr=adj[st][i].first; ///value
        int sc=adj[st][i].second; ///weight
        if(visited[fr]==false)
        {
            visited[fr]=true;
            dfs(fr,sc+wt);
        }
    }
}
main()
{
    int t,u,v,w,n,m1;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++)
    {
        for(int i=0;i<mx;i++)
            adj[i].clear();
        m1=0;
        scanf("%d",&n);
        int d=n;
        n--;
        while(n--)
        {
            scanf("%d%d%d",&u,&v,&w);
            adj[u].pb(mp(v,w));
            adj[v].pb(mp(u,w));
        }
//        for(int i=0;i<d;i++)
//        {
//            memset(visited,false,sizeof visited);
//            ma=0;
//            dfs(i,0);
//            m1=max(ma,m1);
//        }
        memset(visited,false,sizeof visited);
        ma=0;
        dfs(0,0);

        memset(visited,false,sizeof visited);
        ma=0;
        dfs(again,0);

        printf("Case %d: %d\n",cas,ma);
    }
}
