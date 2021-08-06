#include<bits/stdc++.h>
#define ll long long
#define mx 399999
using namespace std;
bool visited[mx];
vector<ll>adj[mx];
ll n,m;
void bfs(ll st)
{
    visited[st]=true;
    queue<ll>q;
    q.push(st);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int sz=adj[x].size();
        for(ll i=0;i<sz;i++)
        {
            ll v=adj[x][i];
            if(visited[v]==false)
            {
                visited[v]=true;
                cout<<x<<" "<<v<<endl;
                q.push(v);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    memset(visited,false,sizeof visited);
    ll u,v;
    while(m--)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll deg=0,shurukorbo=1;
    for(ll i=1;i<=n;i++)
    {
        if(adj[i].size()>=deg)
        {
            deg=adj[i].size();
            shurukorbo=i;
        }
    }
    bfs(shurukorbo);
    return 0;
}
