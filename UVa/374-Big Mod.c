#include<stdio.h>
long long bmod(int a,int b,int m)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
        long long x=bmod(a,b/2,m);
        return (x*x)%m;
    }
    else
    {
        long long x=bmod(a,b-1,m);
        return (a*x)%m;
    }
}
main()
{
    int a,b,m;
    while((scanf("%d",&a))!=EOF)
    {
        scanf("%d %d",&b,&m);
        long long ans=bmod(a,b,m);
        printf("%lld\n",ans);
    }
}
