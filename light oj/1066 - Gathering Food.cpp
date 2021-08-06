#include<bits/stdc++.h>
using namespace std;
string a[20];
int n;
bool vis[20][20];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int bfs(int x,int y,char ch,int total)
{
    vis[x][y]=true;
    queue< pair<int,int> >q;
    q.push(make_pair(x,y));
    int dis[20][20];
    memset(dis,0,sizeof dis);
    int ansx=-1,ansy=-1;
    while(!q.empty())
    {
        int ux=q.front().first;
        int uy=q.front().second;
        //cout<<ux<<" "<<uy<<endl;
        q.pop();
        if(a[ux][uy]==ch)
        {
            ansx=ux;
            ansy=uy;
        }
        for(int k=0;k<4;k++)
        {
            int vx=ux+dx[k];
            int vy=uy+dy[k];
            if((vx>=0 && vx<n) && (vy<n && vy>=0) && vis[vx][vy]==false && (a[vx][vy]!='#' && a[vx][vy]<=ch))
            {
                dis[vx][vy]=dis[ux][uy]+1;
                vis[vx][vy]=true;
                q.push(make_pair(vx,vy));
            }
        }
    }
    if(ansx==-1 && ansy==-1) return -1;
    else return dis[ansx][ansy];
}
int main()
{
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        cin>>n;
        char ch='A';
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            for(int j=0;j<n;j++) ch=max(ch,a[i][j]);
        }
        bool imp=0;
        int ans=0;
        for(char c='A';c<ch;c++)
        {
            char to=c+1;
            bool ok=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(c==a[i][j])
                    {
                        ok=1;
                        memset(vis,false,sizeof vis);
                        int sum = bfs(i,j,to,0);
                        if(sum==-1) {
                            imp=1;
                            break;
                        }
                        else
                            ans+=sum;
                        break;
                    }
                }
                if(ok || imp==1) break;
            }
            if(imp) break;
        }
        if(imp) printf("Case %d: Impossible\n",cs);
        else printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}
