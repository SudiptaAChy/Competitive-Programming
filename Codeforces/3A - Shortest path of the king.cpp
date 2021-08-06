#include<bits/stdc++.h>
#define ll long long
using namespace std;
int x1,y1,x2,y2,n;
int dis[19][19];
vector<pair<int,int>>mve;
bool visited[10][10]={false};
int dx[]={-1,1,1,1,1,-1,-1,-1};
int dy[]={1,0,1,0,-1,0,-1,0};
int bfs(int x,int y)
{
    queue< pair<int,int> >q;
    q.push(make_pair(x,y));
    visited[x][y]=true;
    while(!q.empty())
    {
        pair<int,int>top=q.front();
        q.pop();
        int fr=top.first;
        int sc=top.second;
        if(fr==x2 && sc==y2)
            return dis[fr][sc];
        for(int k=0;k<8;k++)
        {
            int nx=fr+dx[k];
            int ny=sc+dy[k];
            if(nx>0 && nx<=8 && ny>0 && ny<=8 && visited[nx][ny]==false)
            {
                visited[nx][ny]=true;
                dis[nx][ny]=dis[fr][sc]+1;
                q.push(make_pair(nx,ny));
            }
        }
    }
}
int main()
{
    string a,b;
    cin>>a>>b;
    x1=a[0]-96;
    y1=a[1]-'0';
    x2=b[0]-96;
    y2=b[1]-'0';
    dis[x1][y1]=0;
    ///cout<<bfs(x1,y1)<<endl;
    cout<<max(abs(x1-x2),abs(y1-y2))<<endl;
    while(1)
    {
        if(x1==x2 && y1==y2) break;
        if(x1<x2)
        {
            x1++;
            cout<<"R";
        }
        if(x1>x2)
        {
            x1--;
            cout<<"L";
        }
        if(y1>y2)
        {
            y1--;
            cout<<"D";
        }
        if(y1<y2)
        {
            cout<<"U";
            y1++;
        }
        cout<<endl;
    }
    return 0;
}

