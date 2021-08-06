#include<bits/stdc++.h>
#define mx 2009
using namespace std;
int a[mx],level[mx]={0};
bool visited[mx]={false};
vector<int>adj[mx];
void dfs(int st,int l)
{
    visited[st]=true;
    level[st]=l;
    for(int i=0;i<adj[st].size();++i)
    {
        int v=adj[st][i];
        if(visited[v]==false)
        {
            visited[v]=true;
            dfs(v,l+1);
        }
    }
}
main()
{
    int n,i,j,ma=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        int v=a[i];
        int u=i+1;
        if(v!=-1)
            adj[v].push_back(u);
    }
    for(int i=0;i<mx;i++)
    {
        memset(visited,false,sizeof visited);
        dfs(i,1);
        for(int j=0;j<mx;j++)
            ma=max(ma,level[j]);
    }
    cout<<ma;
}
