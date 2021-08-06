#include<bits/stdc++.h>
#define WHITE 0
#define GREY 1
#define BLACK 2
using namespace std;
map<string,int>mp;
vector<int>adj[12345];
int vis[12345],ans;
void pre(void)
{
    ans=false;
    memset(vis,0,sizeof vis);
    mp.clear();
    for(int i=1;i<=12345;i++) adj[i].clear();
}
void dfs(int sc)
{
    int sz=adj[sc].size();
    vis[sc]=GREY;
    for(int i=0;i<sz;i++)
    {
        int v=adj[sc][i];
        if(vis[v]==WHITE) dfs(v);
        else if(vis[v]==GREY)
        {
            ans=true;
            return;
        }
    }
    vis[sc]=BLACK;
}
main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        pre();
        int m;
        scanf("%d",&m);
        int vl=1;
        while(m--)
        {
            string a,b;
            cin>>a>>b;
            if(mp[a]==0) mp[a]=vl,vl++;
            if(mp[b]==0) mp[b]=vl,vl++;
            adj[mp[a]].push_back(mp[b]);
        }
        for(int i=1;i<vl;i++)
        {
            if(vis[i]==WHITE)
            {
                ans=false;
                dfs(i);
                if(ans==true) break;
            }
        }
        if(ans==false) printf("Case %d: Yes\n",cs);
        else printf("Case %d: No\n",cs);
    }
}
