#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,i,j,k;
    cin>>n;
    int a[n+2];
    for(i=1;i<=n;i++) a[i-1]=i;
    if(n%2!=0)
        cout<<"-1";
    else
    {
        for(i=0;i<n;i+=2)
        {
            swap(a[i],a[i+1]);
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
}
