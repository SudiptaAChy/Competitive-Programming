#include<stdio.h>
#include<math.h>
main()
{
    double m,n,a;
    double x,y,flag;
    scanf("%lf %lf %lf",&n,&m,&a);
    x=ceil(n/a);
    y=ceil(m/a);
    flag=x*y;
    printf("%.0lf\n",flag);
}
