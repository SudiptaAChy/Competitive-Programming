#include<stdio.h>
#include<math.h>
main()
{
    int k,n,s,p;
    int x;

    scanf("%d %d %d %d",&k,&n,&s,&p);

    x=ceil((k*ceil(n*1.0/s)*1.0)/p);
    printf("%d",x);
}
