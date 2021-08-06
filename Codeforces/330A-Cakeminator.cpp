#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int r,c,i,j,t=0,s,ok;
    cin>>r>>c;
    char a[r+1][c+1];
    for(i=0;i<r;i++) cin>>a[i];
    for(i=0;i<r;i++)
    {
        ok=0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]=='S')
            {
                ok=1;
                break;
            }
        }
        if(ok==1)
            continue;
        else
        {
            for(j=0;j<c;j++)
            {
                a[i][j]='1';
                t++;
            }
        }
    }



    for(j=0;j<c;j++)
    {
        ok=0;
        for(i=0;i<r;i++)
        {
            if(a[i][j]=='S')
            {
                ok=1;
                break;
            }
        }
        ///cout<<"ok = "<<ok<<endl;
        if(ok==1)
            continue;
        else
        {
            for(i=0;i<r;i++)
            if(a[i][j]=='.')
                t++;
        }
    }
    cout<<t;
}
