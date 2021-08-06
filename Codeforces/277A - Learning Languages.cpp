#include<bits/stdc++.h>
#define sz 1000009
using namespace std;
int ans,t;
int n,m,l,x,y;
bool visited[sz]={false};
vector<int>adj[sz];
void dfs(int node)
{
    visited[node]=true;
    for(int i=0;i<adj[node].size();i++)
    {
        if(visited[adj[node][i]]==false)
        {
            dfs(adj[node][i]);
        }
    }
}
main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>l;
        if(l==0) t++;
        for(int j=0;j<l;j++)
        {
            cin>>x;
            adj[i].push_back(x+100);
            adj[x+100].push_back(i);
        }
    }
    if(t==n)
    {
        cout<<t<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            ans++;
        }
    }
    cout<<ans-1;
}
