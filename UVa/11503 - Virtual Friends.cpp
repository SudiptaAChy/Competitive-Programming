#include<bits/stdc++.h>
#define N 100009
using namespace std;
vector<int>adj[N];
bool vis[N];
map<string,int>name;
int ans;
void dfs(int u)
{
    vis[u]=1;
    ans++;
    for(auto v : adj[u])
    {
        if(!vis[v]) dfs(v);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<N;i++) adj[i].clear();
        name.clear();
        int n;
        scanf("%d",&n);
        string a[n+5],b[n+5];
        int val=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            if(name[a[i]]==0) name[a[i]]=val++;
            if(name[b[i]]==0) name[b[i]]=val++;
        }
        for(int i=0;i<n;i++)
        {
            int u=name[a[i]];
            int v=name[b[i]];
            adj[u].push_back(v);
            adj[v].push_back(u);
            memset(vis,0,sizeof vis);
            ans=0;
            dfs(u);
            printf("%d\n",ans);
        }
    }
    return 0;
}
