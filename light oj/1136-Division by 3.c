#include<stdio.h>
#include<math.h>
main()
{
    int test,i;
    double a,b;
    double diff,total;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%lf %lf",&a,&b);
        diff=(b-a)+1;
        total=ceil((diff*2)/3);
        printf("Case %d: %.0lf\n",i,total);
    }
}
