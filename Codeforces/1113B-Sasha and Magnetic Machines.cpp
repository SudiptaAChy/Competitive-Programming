#include<bits/stdc++.h>
#define maxi 100009
using namespace std;
int a[maxi];
main()
{
    int n,s=0,ans;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    ans=s;
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        for(int j=2;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                ans=min(ans,s-a[0]-a[i]+a[0]*j+a[i]/j);
            }
        }
    }
    cout<<ans;
}
