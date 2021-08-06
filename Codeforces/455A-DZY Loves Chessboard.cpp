#include<bits/stdc++.h>
using namespace std;
char a[109][109];
main(void)
{
    int i,j,n,m;
    int bl=0,wh=0;
    cin>>n>>m;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            bl=1;
        else
            wh=1;
        for(j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                if(bl==1)
                {
                    a[i][j]='B';
                    bl=0,wh=1;
                }
                else
                {
                    a[i][j]='W';
                    bl=1,wh=0;
                }
            }
            else
            {
                if(bl==1)
                {
                    bl=0,wh=1;
                }
                else
                {
                    bl=1,wh=0;
                }
            }
        }
        bl=0,wh=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<a[i][j];
        cout<<endl;
    }
}
