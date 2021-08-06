#include<stdio.h>
main()
{
    long long n,s=0,i,f=1;
    scanf("%I64d",&n);

    if(n&1)
        s=-(n-n/2);
    else
        s=n/2;

    printf("%I64d",s);
}
