///0 = black && 1 = white
#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,m,c;
    long long ans;
    while(scanf("%d%d%d",&n,&m,&c) && n!=0 && m!=0)
    {
        if(c==1)
        {
            if(n>m)
                ans=ceil(n/8.0)+ceil(m/8.0)-1+(m-8);
            else
                ans=ceil(n/8.0)+ceil(m/8.0)-1+(m-8);
            printf("%d\n",ans);
        }
        else
        {
            if(n>m)
                ans=((n-8)/2)+((m-8)/2)+
            printf("%d\n",ans);
        }
    }
}
