#include<bits/stdc++.h>
using namespace std;
char a[1009][1009];
int ch[1009][1009];
int total;
void check(int x,int y,int row,int col)
{
    if(a[x+1][y]=='.' && x+1<row && ch[x+1][y]==-1)
    {
        total++;
        ch[x+1][y]=1;
        check(x+1,y,row,col);
    }
    if(a[x-1][y]=='.' && x-1>=0 && ch[x-1][y]==-1)
    {
        total++;
        ch[x-1][y]=1;
        check(x-1,y,row,col);
    }
    if(a[x][y+1]=='.' && y+1<col && ch[x][y+1]==-1)
    {
        total++;
        ch[x][y+1]=1;
        check(x,y+1,row,col);
    }
    if(a[x][y-1]=='.' && y-1>=0 && ch[x][y-1]==-1)
    {
        total++;
        ch[x][y-1]=1;
        check(x,y-1,row,col);
    }
}
main()
{
    int t,cas,n,m,i,j,k,x,f,y;
    cin>>t;
    for(cas=1;cas<=t;cas++)
    {
        f=0;
        total=1;
        memset(ch,-1,sizeof ch);
        cin>>m>>n;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]=='@')
                {
                    x=i,y=j;f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        ch[x][y]=1;
        check(x,y,n,m); ///n=row m=col
        printf("Case %d: %d\n",cas,total);
    }
}

