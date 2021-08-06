#include<stdio.h>
#include<math.h>
main()
{
    int t,i;
    double a,b,c,A,B,C,r1,r2,r3,s,area,define;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        a=r1+r3;
        b=r2+r3;
        c=r1+r2;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        A=acos((b*b+c*c-a*a)/(2*b*c));
        B=acos((a*a+c*c-b*b)/(2*a*c));
        C=acos((b*b+a*a-c*c)/(2*a*b));
        define=area-0.5*(r2*r2*A+r3*r3*C+r1*r1*B);
        printf("Case %d: %lf\n",i,define);
    }
}
