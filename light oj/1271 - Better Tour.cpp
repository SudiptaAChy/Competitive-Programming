#include<bits/stdc++.h>
#define ll long long
#define sz 50009
using namespace std;
bool vis[sz];
vector<int>adj[sz];
map<int,bool>loop;
int par[sz];
void sat(void)
{
    for(int i=0;i<sz;i++)
    {
        adj[i].clear();
        vis[i]=false;
        par[i]=0;
    }
    loop.clear();
}
void bfs(int s,int fi)
{
    queue<int>q;
    vis[s]=true;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto v : adj[u])
        {
            if(!vis[v])
            {
                vis[v]=1;
                par[v]=u;
                if(v == fi) return ;
                q.push(v);
            }
        }
    }
}
void print(int st)
{
    if(par[st] == 0)
    {
        printf("%d",st);
        return ;
    }
    print(par[st]);
    printf(" %d",st);
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        scanf("%d",&n);
        int a[n+3];
        for(int k=0;k<n;k++)
        {
            scanf("%d",&a[k]);
        }
        for(int i=0;i<n-1;i++)
        {
            adj[a[i]].push_back(a[i+1]);
            adj[a[i+1]].push_back(a[i]);
        }
        for(int i=0;i<n;i++) sort(adj[a[i]].begin(),adj[a[i]].end());
        bfs(a[0],a[n-1]);
        printf("Case %d:\n",cs);
        print(a[n-1]);
        printf("\n");
        sat();
    }
    return 0;
}
