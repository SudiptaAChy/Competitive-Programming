#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,s=0,a[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
            s+=a[i][j];
        }
    }
    s/=2;
    a[0][0]=s-a[0][1]-a[0][2];
    a[1][1]=s-a[1][0]-a[1][2];
    a[2][2]=s-a[2][0]-a[2][1];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
