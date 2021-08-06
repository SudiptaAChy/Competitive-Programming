#include<stdio.h>
main(void)
{
    int t,i,chance;
    long long w,n,m;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lld",&w);

        chance=0;

        if(w%2==0)
        {
            for(m=2;m<=w;m=m*2)
            {
                if(w%m==0)
                {
                    n=w/m;
                    if(n%2!=0)
                    {
                        printf("Case %d: %lld %lld\n",i,n,m);
                        chance=1;
                        break;
                    }
                }
            }
        }
        else
            chance=0;
        if(chance==0)
            printf("Case %d: Impossible\n",i);
    }
}
