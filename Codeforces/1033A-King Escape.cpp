#include<bits/stdc++.h>
#define ll long long
#define mx 399999
using namespace std;
ll n,ax,ay,bx,by,cx,cy;
bool visited[1009][1009];
bool ok=false;
int dx[]={-1,0,1,-1,1,-1,0,1};
int dy[]={1,1,1,0,0,-1,-1,-1};
void dfs(int x,int y)
{
    visited[x][y]=true;
    if(x==cx && y==cy)
    {
        ok=true;
        return;
    }
    for(int k=0;k<8;k++)
    {
        ll nx=x+dx[k];
        ll ny=y+dy[k];
        if((nx>0 && nx<=n) && (ny>0 && ny<=n) && visited[nx][ny]==false)
        {
            dfs(nx,ny);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    memset(visited,false,sizeof visited);
    cin>>n>>ax>>ay>>bx>>by>>cx>>cy;

    for(ll i=1;i<=n;i++)
        visited[i][ay]=true;
    for(ll i=1;i<=n;i++)
        visited[ax][i]=true;
    for(ll i=ax,j=ay;i<=n && j<=n;i++,j++)
        visited[i][j]=true;
    for(ll i=ax,j=ay;i>0 && j>0;i--,j--)
        visited[i][j]=true;
    for(ll i=ax,j=ay;i>0 && j<=n;i--,j++)
        visited[i][j]=true;
    for(ll i=ax,j=ay;i<=n && j>0;i++,j--)
        visited[i][j]=true;

    dfs(bx,by);
    if(ok==true) cout<<"YES";
    else cout<<"NO";

    return 0;
}
