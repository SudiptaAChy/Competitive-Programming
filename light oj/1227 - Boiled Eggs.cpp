#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n,p,q;
        scanf("%d%d%d",&n,&p,&q);
        int a[n+10];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int ans=0,to=0,gm=0;
        for(int i=0;i<n;i++)
        {
            gm+=a[i];
            if(gm>q || ans>=p) break;
            ans++;
        }
        printf("Case %d: %d\n",cs,ans);
    }
}
