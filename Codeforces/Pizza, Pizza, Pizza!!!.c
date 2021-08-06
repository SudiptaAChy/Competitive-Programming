#include<stdio.h>
main(void)
{
    long long n;
    scanf("%I64d",&n);
    if(n&1)
        n=(n+1)/2;
    else if(n==0)
        n=0;
    else
        n=n+1;
    printf("%I64d",n);
}
