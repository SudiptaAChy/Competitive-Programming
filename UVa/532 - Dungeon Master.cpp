#include<bits/stdc++.h>
#define mx 100
using namespace std;
int l,c,r;
int ax,ay,bx,by;
char a[mx][mx];
main()
{
    while(cin>>l>>r>>c)
    {
        if(l==0 && r==0 && c==0) break;
        while(l--)
        {
            for(int i=0;i<r;i++) for(int j=0;j<c;j++) {cin>>a[i][j]; if(a[i][j]=='S')ax=i,ay=j; if(a[i][j]=='E')bx=i,by=j; }

        }
    }
}
