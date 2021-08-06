#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,t=0;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)cin>>a[i];
    t+=a[0];
    for(i=0;i<n-1;i++)
    {
        t+=abs(a[i]-a[i+1])+1; ///up or down plus jump
    }
    t+=+n;
    cout<<t;
}
