#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int n,m,k,s,t;
char a[1009][1009];
vector< pair<int,int> >adj;
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
bool visited[1009][1009]={false};
void dfs(int x,int y)
{
    if(t>=(s-k)) return;
    a[x][y]='|';
    for(int k=0;k<4;k++)
    {
        int nx=x+dx[k];
        int ny=y+dy[k];
        if(nx>=0 && nx<n && ny>=0 && ny<m && a[nx][ny]=='.' && visited[nx][ny]==false)
        {
            t+=1;
            visited[nx][ny]=true;
            dfs(nx,ny);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m>>k;
    int stx=-1,sty=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                s++;
                if(stx==-1 && sty==-1)
                {
                    stx=i;sty=j;
                }
            }
        }
    }
    visited[stx][sty]=true;
    t=0;
    dfs(stx,sty);
    int khali=0;
    for(int i=0;i<n;i++)
    {
        int o=0;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                a[i][j]='X';
                khali++;
                if(khali>=k) {o=1;break;}
            }
        }
        if(o==1) break;
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]=='|') a[i][j]='.';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
