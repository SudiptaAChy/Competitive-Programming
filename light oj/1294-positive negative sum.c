#include<stdio.h>
main(void)
{
    int i,t;
    long n,m,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld",&n,&m);
        sum=(n*m)/2;
        printf("Case %d: %ld\n",i,sum);
    }
}
