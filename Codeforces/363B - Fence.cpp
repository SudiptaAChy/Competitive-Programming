#include<bits/stdc++.h>
using namespace std;
int a[1000009],s[1000009];
main()
{
    int n,k,mi=1000000000,ans,jog=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    for(int i=k;i<=n;i++)
    {
        jog=s[i]-s[i-k];
        if(jog<mi)
        {
            mi=jog;
            ans=i-k+1;
        }
    }
    cout<<ans;
    return 0;
}
