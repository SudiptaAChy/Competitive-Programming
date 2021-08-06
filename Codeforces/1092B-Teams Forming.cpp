#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int tm=n/2;
    int s=0;
    for(int i=0;i<n;i+=2)
    {
        s+=abs(a[i]-a[i+1]);
    }
    cout<<s;
}
