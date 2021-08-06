#include<bits/stdc++.h>
#define sz 209
#define inf 123456
using namespace std;
char a[209][209];
int r,c;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int disj[sz][sz],disf[sz][sz];
bool visf[sz][sz],visj[sz][sz];
vector< pair<int,int> >fire;
void bfs(void)
{
    memset(visf,false,sizeof visf);
    queue< pair<int,int> >q;

    for(int i=0;i<fire.size();i++)
    {
        q.push(fire[i]);
        disf[fire[i].first][fire[i].second]=0;
        visf[fire[i].first][fire[i].second]=true;
    }

    while(!q.empty())
    {
        int ux=q.front().first;
        int uy=q.front().second;
        q.pop();
        for(int k=0;k<4;k++)
        {
            int vx=ux+dx[k];
            int vy=uy+dy[k];
            if((vx>=1 && vx<=r) && (vy>=1 && vy<=c) && visf[vx][vy]==false && a[vx][vy]!='#')
            {
                if(disf[vx][vy]==-1)
                {
                    disf[vx][vy]=disf[ux][uy]+1;
                }
                else
                {
                    disf[vx][vy]=min(disf[vx][vy],disf[ux][uy]+1);
                }
                visf[vx][vy]=true;
                q.push(make_pair(vx,vy));
            }
        }
    }
}
void bfs1(int x,int y)
{
    memset(visj,false,sizeof visj);
    memset(disj,-1,sizeof disj);
    queue< pair<int,int> >q;
    q.push(make_pair(x,y));
    disj[x][y]=0;
    visj[x][y]=true;
    while(!q.empty())
    {
        int ux=q.front().first;
        int uy=q.front().second;
        q.pop();
        for(int k=0;k<4;k++)
        {
            int vx=ux+dx[k];
            int vy=uy+dy[k];
            if((vx>=1 && vx<=r) && (vy>=1 && vy<=c) && visj[vx][vy]==false && a[vx][vy]!='#')
            {
                disj[vx][vy]=disj[ux][uy]+1;
                visj[vx][vy]=true;
                q.push(make_pair(vx,vy));
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        fire.clear();
        memset(disf,-1,sizeof disf);
        scanf("%d %d ",&r,&c);
        for(int i=1;i<=r;i++) scanf("%s",a[i]+1);
        bool fnd=0;
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(a[i][j]=='F')
                {
                    fnd=1;
                    fire.push_back(make_pair(i,j));
                }
            }
        }
        bfs();
        if(fnd == 0) memset(disf,inf,sizeof disf);
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(a[i][j]=='J')
                {
                    bfs1(i,j);
                    break;
                }
            }
        }
        bool win = 0;
        int ans=INT_MAX;
        for(int i=1;i<=c;i++)
        {
            if(disj[1][i]!=-1 && disf[1][i]!=0 && disj[1][i]<disf[1][i])
            {
                win=1;
                ans=min(ans,disj[1][i]);
            }
        }
        for(int i=1;i<=c;i++)
        {
            if(disj[r][i]!=-1 && disf[r][i]!=0 && disj[r][i]<disf[r][i])
            {
                win=1;
                ans=min(ans,disj[r][i]);
            }
        }
        for(int i=1;i<=r;i++)
        {
            if(disj[i][1]!=-1 && disf[i][1]!=0 && disj[i][1]<disf[i][1])
            {
                win=1;
                ans=min(ans,disj[i][1]);
            }
        }
        for(int i=1;i<=r;i++)
        {
            if(disj[i][1]!=-1 && disf[i][1]!=0 && disj[i][c]<disf[i][c])
            {
                win=1;
                ans=min(ans,disj[i][c]);
            }
        }
        printf("Case %d: ",cs);
        if(win) printf("%d\n",ans+1);
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}
