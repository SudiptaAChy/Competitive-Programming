#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        scanf("%d",&n);
        int a[n+10],ans=0;
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        if(a[0]>2) ans+=ceil((a[0]-2.0)*1.0/5);
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]>a[i])
            {
                if((a[i+1]-a[i])<=5) ans++;
                else
                {
                    ans+=ceil((a[i+1]-a[i])*1.0/5);
                }
            }
        }
        printf("Case %d: %d\n",cs,ans);
    }
}
