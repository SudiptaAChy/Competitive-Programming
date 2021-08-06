#include<stdio.h>
main()
{
    double a,b;
    while((scanf("%lf %lf",&a,&b))!=EOF)
    {
        if(a>b)
            printf("%.0lf\n",a-b);
        else
            printf("%.0lf\n",b-a);
    }
}
