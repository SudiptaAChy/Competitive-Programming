#include<bits/stdc++.h>
using namespace std;
int a[509][509];
main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) cin>>a[i][j];
    }
    int ans=0;
    for(int i=1;i<=n;i++) ans=ans xor a[i][1];
    if(ans!=0)
    {
        puts("TAK");
        for(int i=1;i<=n;i++) cout<<"1 ";
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        ans=0;
        for(int j=1;j<m;j++)
        {
            ans=a[i][j];
            ans=ans xor a[i][j+1];
            if(ans!=0)
            {
                puts("TAK");
                for(int k=1;k<i;k++) cout<<"1 ";
                cout<<j+1<<" ";
                for(int k=i+1;k<=n;k++) cout<<"1 ";
                return 0;
            }
        }
    }
    puts("NIE");
}
