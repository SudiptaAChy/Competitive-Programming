#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,ans,ans1,ans2;
    cin>>n>>m;
    if(n==0 || m==0 ) ans=0;
    else
    {
        ans1=(n+m)/3;
        ans2=min(n,m);
        ans=min(ans1,ans2);
    }
    cout<<ans<<endl;
}

