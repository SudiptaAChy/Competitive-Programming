#include<bits/stdc++.h>
#define sz 1009
using namespace std;
int x[sz],y[sz],n,total;
bool visited[sz];
void dfs(int node)
{
    visited[node]=true;
    for(int i=0;i<n;i++)
    {
        if(visited[i]==false && (x[i]==x[node] || y[i]==y[node]))
        {
            dfs(i);
        }
    }
}
main()
{
    memset(visited,false,sizeof visited);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(int i=0;i<n;i++)
    {
        if(visited[i]==false)
        {
            total++;
            dfs(i);
        }
    }
    total--;
    cout<<total<<endl;
}
