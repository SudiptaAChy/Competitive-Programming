#include<stdio.h>
main(void)
{
    int d1,d2,d3;
    long long a,b,c,d,e,f,min=10000000000000;
    scanf("%d %d %d",&d1,&d2,&d3);
    a=d1+d2+d3;
    if(min>a)
        min=a;
    b=2*(d1+d2);
    if(min>b)
        min=b;
    c=2*(d1+d3);
    if(min>c)
        min=c;
    d=2*(d3+d2);
    if(min>d)
        min=d;
    printf("%lld",min);
}
