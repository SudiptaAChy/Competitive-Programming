#include<stdio.h>
main(void)
{
    long long n,i,s,a=0,b=0,c=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&s);
        a+=s;
    }
    for(i=0;i<n-1;i++)
    {
        scanf("%lld",&s);
        b+=s;
    }
    for(i=0;i<n-2;i++)
    {
        scanf("%lld",&s);
        c+=s;
    }
    printf("%lld\n%lld",a-b,b-c);
}
