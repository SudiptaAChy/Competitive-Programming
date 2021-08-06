#include<bits/stdc++.h>
#define mx 1000009
using namespace std;
vector<int>adj[mx],v;
int a[mx],lvl[mx];
bool visited[mx]={false};
bool srt(int a,int b)
{
    return lvl[a]<lvl[b];
}
void bfs(int st)
{
    visited[st]=true;
    queue<int>q;
    q.push(st);
    while(!q.empty())
    {
        int x=q.front();
        v.push_back(x);
        sort(adj[x].begin(),adj[x].end(),srt);
        q.pop();
        for(int i=0;i<adj[x].size();i++)
        {
            int v=adj[x][i];
            if(visited[v]==false)
            {
                q.push(v);
                visited[v]=true;
            }
        }
    }
}
main()
{
    int n,u1,u2;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>u1>>u2;
        adj[u1].push_back(u2);
        adj[u2].push_back(u1);
    }
    for(int i=0;i<n;i++) { cin>>a[i];
        lvl[a[i]]=i+1;
    }
    bfs(1);
    int sam=0;
    if(v.size()!=n) sam=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=a[i])
        {
            sam=1;break;
        }
    }
    if(sam==0) cout<<"Yes\n";
    else cout<<"No\n";
}
