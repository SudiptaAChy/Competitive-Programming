#include<stdio.h>
main()
{
    long long n,i,j,k,l;
    t:
    scanf("%lld",&n);
    if(n==0)
        goto e;
    else
    {
        if(n<0)
        {
            printf("%d = -1 x ",n);
            n*=-1;
        }
        else
            printf("%d = ",n);

        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                printf("%d x ",i);
                n/=i;
                i=1;
            }
        }
        if(n>2 || n==2)
            printf("%d",n);

        printf("\n");
        goto t;
    }
    e:
    ;
}
