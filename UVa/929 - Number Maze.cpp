#include<bits/stdc++.h>
#define sz 1001
#define pii pair<int,int>
using namespace std;
int dx[]={-1,0,0,+1};
int dy[]={0,+1,-1,0};
struct node {
    int x,y,w;
    friend bool operator<(node a,node b)
    {
        return a.w>b.w;
    }
};
int a[sz][sz],n,m,dis[sz][sz];
bool visited[sz][sz];
void dijkstra(int x,int y)
{
    priority_queue<node>pq;
    dis[x][y]=a[x][y];
    node q;
    q.x=x;
    q.y=y;
    q.w=dis[x][y];
    pq.push(q);
    while(!pq.empty())
    {
        node p = pq.top();
        pq.pop();
        visited[p.x][p.y]=true;
        for(int k=0;k<4;k++)
        {
            int nx=p.x+dx[k];
            int ny=p.y+dy[k];
            if(nx>=0 && nx<n && ny>=0 && ny<m && visited[nx][ny]==false)
            {
                if(dis[p.x][p.y]+a[nx][ny]<dis[nx][ny])
                {
                    dis[nx][ny]=dis[p.x][p.y]+a[nx][ny];
                    node n1;
                    n1.x=nx;
                    n1.y=ny;
                    n1.w=dis[nx][ny];
                    pq.push(n1);
                }
            }
        }
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                visited[i][j]=false;
                dis[i][j]=INT_MAX;
            }
        }
        dijkstra(0,0);
        cout<<dis[n-1][m-1]<<endl;
    }
}
