#include<bits/stdc++.h>
using namespace std;
string a[200],b[200],c[200];
main()
{
    int n,s=0,ans=0,t,i,j,mx=0;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i],b[i]=a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]=='0') break;
        }
        if(j==n) s++;
    }
    ans=s;
    for(i=0;i<n;i++)
    {
        t=0;
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j]) t++;
        }
        mx=max(mx,t);
    }
    ans=max(mx,ans);
    cout<<ans;
}
