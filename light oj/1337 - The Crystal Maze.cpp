#include<bits/stdc++.h>
#define mx 509
#define mp make_pair
using namespace std;
int n,m,total;
char a[mx][mx];
bool visited[mx][mx];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int cnt[mx][mx];
void bfs(int x,int y)
{
    visited[x][y]=true;
    queue< pair<int,int> > q;
    q.push(mp(x,y));
    while(!q.empty())
    {
        int c1=q.front().first;
        int c2=q.front().second;
        q.pop();
        if(a[c1][c2]=='c' || a[c1][c2]=='C')
            total++;
        for(int k=0;k<4;k++)
        {
            int nx=c1+dx[k];
            int ny=c2+dy[k];
            if(a[nx][ny]!='#' && nx>=0 && nx<n && ny>=0 && ny<m && visited[nx][ny]==false)
            {
                visited[nx][ny]=true;
                q.push(mp(nx,ny));
            }
        }
    }
}
main()
{
    int q,n1,n2,cas=1,t;
    scanf("%d",&t);
    while(t--)
    {
        memset(cnt,-1,sizeof cnt);
        printf("Case %d:\n",cas++);
        scanf("%d%d%d",&n,&m,&q);
        for(int i=0;i<n;i++)
        {
            scanf("%s",a[i]);
        }
        while(q--)
        {
            scanf("%d %d",&n1,&n2);
            n1-=1;
            n2-=1;
            if(cnt[n1][n2]!=-1)
                printf("%d\n",cnt[n1][n2]);
            else
            {
                total=0;
                memset(visited,false,sizeof visited);
                bfs(n1,n2);
                printf("%d\n",total);
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        if(visited[i][j]==true)
                            cnt[i][j]=total;
                    }
                }
            }
        }
    }
}
