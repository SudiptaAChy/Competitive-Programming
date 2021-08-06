#include<bits/stdc++.h>
#define sz 12
using namespace std;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int n;
string a[sz];
bool vis1[sz][sz],vis2[sz][sz],vis3[sz][sz];
int dis1[sz][sz],dis2[sz][sz],dis3[sz][sz];

bool chk1(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<n) return true;
    return false;
}
bool chk2(int x,int y)
{
    if(a[x][y]=='.' || a[x][y]=='X') return 1;
    return 0;
}

void bfs(int x1,int y1,int x2,int y2,int x3,int y3)
{
    memset(dis1,-1,sizeof dis1);
    memset(dis2,-1,sizeof dis2);
    memset(dis3,-1,sizeof dis3);
    memset(vis1,false,sizeof vis1);
    memset(vis2,false,sizeof vis2);
    memset(vis3,false,sizeof vis3);

    queue< pair<int,int> >q1,q2,q3;
    q1.push({x1,y1});
    q2.push({x2,y2});
    q3.push({x3,y3});

    vis1[x1][y1]=1;
    vis2[x2][y2]=1;
    vis3[x3][y3]=1;

    dis1[x1][y1]=0;
    dis2[x2][y2]=0;
    dis3[x3][y3]=0;

    while(!q1.empty() || !q2.empty() || !q3.empty())
    {
        int ux1,uy1,ux2,uy2,ux3,uy3;

            ux1=q1.front().first;
            uy1=q1.front().second;
            q1.pop();

            ux2=q2.front().first;
            uy2=q2.front().second;
            q2.pop();

            ux3=q3.front().first;
            uy3=q3.front().second;
            q3.pop();
//cout<<ux1<<" "<<uy1<<" "<<ux2<<" "<<uy2<<" "<<ux3<<" "<<uy3<<endl;
        for(int k=0;k<4;k++)
        {
            int vx1=ux1+dx[k];
            int vy1=uy1+dy[k];

            int vx2=ux2+dx[k];
            int vy2=uy2+dy[k];

            int vx3=ux3+dx[k];
            int vy3=uy3+dy[k];

            if(chk1(vx1,vy1) && chk2(vx1,vy1) && !vis1[vx1][vy1] && chk1(vx2,vy2) && chk2(vx2,vy2) && !vis2[vx2][vy2] && chk1(vx3,vy3) && chk2(vx3,vy3) && !vis3[vx3][vy3])
            {
                vis1[vx1][vy1]=1;
                vis2[vx2][vy2]=1;
                vis3[vx3][vy3]=1;

                dis1[vx1][vy1]=dis1[ux1][uy1]+1;
                dis2[vx2][vy2]=dis2[ux2][uy2]+1;
                dis3[vx3][vy3]=dis3[ux3][uy3]+1;

                ///pushing
                if(a[vx1][vy1]=='X')
                {
                    memset(vis1,false,sizeof vis1);
                    q1.push({ux1,uy1});
                }
                else
                {
                    q1.push({vx1,vy1});
                }
                if(a[vx2][vy2]=='X')
                {
                    memset(vis2,false,sizeof vis2);
                    q2.push({ux2,uy2});
                }
                else
                {
                    q2.push({vx2,vy2});
                }
                if(a[vx3][vy3]=='X')
                {
                    memset(vis3,false,sizeof vis3);
                    q3.push({ux3,uy3});
                }
                else
                {
                    q3.push({vx3,vy3});
                }
            }
        }
    }
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        cin>>n;
        vector< pair<int,int> >ex,robo;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j] == 'X')
                {
                    ex.push_back({i,j});
                }
                if(a[i][j] == 'A' || a[i][j] == 'B' || a[i][j] == 'C')
                {
                    robo.push_back({i,j});
                }
            }
        }
        bool fnd=0;
        int ans=INT_MIN;


        //for(int i=0;i<robo.size();i++) cout<<robo[i].first<<" "<<robo[i].second<<endl;

        bfs(robo[0].first,robo[0].second,robo[1].first,robo[1].second,robo[2].first,robo[2].second);

        int ans1=INT_MAX;
        int ans2=INT_MAX;
        int ans3=INT_MAX;

        for(int i=0;i<ex.size();i++)
        {
            int fr=ex[i].first;
            int sc=ex[i].second;
            //cout<<"dis1 "<<dis1[fr][sc]<<endl;
            if(dis1[fr][sc]!=-1) ans1=min(ans1,dis1[fr][sc]);
        }
        for(int i=0;i<ex.size();i++)
        {
            int fr=ex[i].first;
            int sc=ex[i].second;
            //cout<<"dis2 "<<dis2[fr][sc]<<endl;
            if(dis2[fr][sc]!=-1) ans2=min(ans2,dis2[fr][sc]);
        }
        for(int i=0;i<ex.size();i++)
        {
            int fr=ex[i].first;
            int sc=ex[i].second;
            //cout<<"dis3 "<<dis3[fr][sc]<<endl;
            if(dis3[fr][sc]!=-1) ans3=min(ans3,dis3[fr][sc]);
        }
        ans=max(ans1,max(ans2,ans3));
        if(ans == INT_MAX) printf("Case %d: trapped\n",cs);
        else printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}
/*

50
3
.XA
XB.
C.X

*/
