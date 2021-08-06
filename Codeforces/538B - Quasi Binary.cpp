#include<bits/stdc++.h>
using namespace std;
main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int n,x,t=1,sz=0;
    int a[100009]={0};
    cin>>n;
    while(n>0)
    {
        x=n%10;
        n/=10;
        sz=max(sz,x);
        for(int i=0;i<x;i++)
            a[i]=a[i]+t;
        t=t*10;
    }
    cout<<sz<<endl;
    for(int i=0;i<sz;i++)
        cout<<a[i]<<" ";
}
