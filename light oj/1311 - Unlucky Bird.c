#include<stdio.h>
main()
{
    int t,i;
    double v1,v2,v3,a1,a2;
    double d,b_d,time;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        time=(v1+v2)/(a1+a2);
        d=(v1+v2)*time-0.5*time*time*(a1+a2);
        b_d=v3*time;

        printf("Case %d: %lf %lf\n",i,d,b_d);
    }
}
