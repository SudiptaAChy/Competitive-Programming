#include<stdio.h>
main(void)
{
    int a,b,s,t;
    scanf("%d%d",&a,&b);
    s=(a<b)?a:b;
    t=(a>b)?a-b:b-a;
    t=t/2;
    printf("%d %d",s,t);
}
