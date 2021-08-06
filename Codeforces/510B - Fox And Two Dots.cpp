#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,a1,a2;
char a[60][60];
bool visited[60][60];
bool ok=false;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
void dfs(int x,int y,int i,int j)
{
    visited[x][y]=true;
    for(int k=0;k<4;k++)
    {
        int nx=x+dx[k];
        int ny=y+dy[k];
        if((nx>=0 && nx<n) && (ny>=0 && ny<m) && a[x][y]==a[nx][ny] && !(nx==i && ny==j))
        {
            if(visited[nx][ny])
            {
                ok=true;
                a1=nx;
                a2=ny;
            }
            else dfs(nx,ny,x,y);
        }
    }
}
int main()
{
    memset(visited,false,sizeof visited);
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j])
            {
                dfs(i,j,-1,-1);
            }
        }
    }
    ///cout<<a1<<" "<<a2<<endl;
    if(ok==true) puts("Yes");
    else puts("No");
    return 0;
}
