#include<bits/stdc++.h>
#define mx 1000009
#define pb push_back
using namespace std;
vector<int>adj[mx];
bool visited[mx];
int mat[mx],n;
void clr()
{
    for(int i=0;i<mx;i++)
    {
        adj[i].clear();
        visited[i]=false;
    }
}
void bfs(int st)
{
    queue<int>q;
    mat[st]=0;
    q.push(st);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int sz=adj[x].size();
        for(int i=0;i<sz;i++)
        {
            int v=adj[x][i];
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }
    int total=0;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==false) total++;
    }
    cout<<total;
    for(int i=1;i<=n;i++)
        if(visited[i]==false) cout<<" "<<i;
}
main()
{
    int u,v,x,y,q;
    while(cin>>n && n!=0)
    {
        clr();
        while(cin>>u && u!=0)
        {
            while(cin>>v && v!=0)
            {
                adj[u].pb(v);
            }
        }
        cin>>q;
        for(int i=0;i<q;i++)
        {
            memset(visited,false,sizeof visited);
            cin>>x;
            bfs(x);
            cout<<endl;
        }
    }
}

