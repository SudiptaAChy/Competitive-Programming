#include<bits/stdc++.h>
#define mx 1009
#define mp make_pair
using namespace std;
char a[mx][mx];
bool visited[mx][mx];
int n,m,dis[mx][mx];
const int dx[]={1,-1,0,0};
const int dy[]={0,0,1,-1};
void clr()
{
    memset(visited,false,sizeof visited);
    memset(dis,-1,sizeof dis);
}
int bfs(int x,int y)
{
    clr();
    queue< pair<int,int> >q;
    visited[x][y]=true;
    dis[x][y]=0;
    q.push(mp(x,y));
    while(!q.empty())
    {
        int c1,c2;
        c1=q.front().first;
        c2=q.front().second;
        q.pop();
        if(a[c1][c2]=='h')
        {
            return dis[c1][c2];
        }
        for(int k=0;k<4;k++)
        {
            int nx=c1+dx[k];
            int ny=c2+dy[k];
            if(nx>=0 && nx<n && ny>=0 && ny<m && a[nx][ny]!='#' && a[nx][ny]!='m' && visited[nx][ny]!=true)
            {
                dis[nx][ny]=dis[c1][c2]+1;
                visited[nx][ny]=true;
                q.push(mp(nx,ny));
            }
        }
    }
}
main()
{
    int t,i,j;
    int ax,ay,bx,by,cx,cy;
    int ans;
    cin>>t;
    for(int cas=1;cas<=t;cas++)
    {
        ans=0;
        cin>>n>>m;
        getchar();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='a')
                {
                    ax=i,ay=j;
                }
                if(a[i][j]=='b')
                {
                    bx=i,by=j;
                }
                if(a[i][j]=='c')
                {
                    cx=i,cy=j;
                }
            }
        }
        ans=max(ans,bfs(ax,ay));
        ans=max(ans,bfs(bx,by));
        ans=max(ans,bfs(cx,cy));
        printf("Case %d: %d\n",cas,ans);
    }
}
