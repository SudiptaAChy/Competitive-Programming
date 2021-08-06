#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int mod,step;
    while(scanf("%d",&step)!=EOF)
    {
        scanf("%d",&mod);
        int ans=((rand()%mod)+(step%mod))%mod;
        printf("%d\n",ans);
    }
}
