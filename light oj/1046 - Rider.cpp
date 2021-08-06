#include<bits/stdc++.h>
#define pii pair<int,int>
#define inf 1e6
using namespace std;
const int sz=12;
string a[sz];
int n,m;
int cnt[sz][sz],dis[sz][sz];
int dx[]={1,1,2,2,-1,-1,-2,-2};
int dy[]={2,-2,1,-1,2,-2,1,-1};
void bfs(pii p,int k)
{
    queue<pii>q;
    q.push(p);
    int d[sz][sz];
    for(int i=0;i<sz;i++) for(int j=0;j<m;j++) d[i][j]=inf;
    d[p.first][p.second]=0;
    while(!q.empty())
    {
        pii u=q.front();
        q.pop();
        for(int l=0;l<8;l++)
        {
            pii v={u.first+dx[l],u.second+dy[l]};
            int fr=v.first;
            int sc=v.second;
            if(fr>=0 && fr<n && sc>=0 && sc<m && d[fr][sc]>d[u.first][u.second]+1)
            {
                d[fr][sc]=d[u.first][u.second]+1;
                q.push(v);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(d[i][j] != inf)
                cnt[i][j]++;
            dis[i][j]+=(d[i][j]+k-1)/k;
        }
    }
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        memset(dis,0,sizeof dis);
        memset(cnt,0,sizeof cnt);
        int total_rider=0;
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]!='.')
                {
                    bfs({i,j},a[i][j]-'0');
                    total_rider++;
                }
            }
        }
        int ans=inf;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(cnt[i][j] == total_rider)
                    ans=min(ans,dis[i][j]);
            }
        }
        if(ans == inf) printf("Case %d: -1\n",cs);
        else printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}

