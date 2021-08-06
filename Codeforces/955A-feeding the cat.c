#include<stdio.h>
#include<math.h>
main()
{
    int hh,mm;
    double H,D,C,N;
    double total,a,b;
    scanf("%d %d",&hh,&mm);
    scanf("%lf %lf %lf %lf",&H,&D,&C,&N);

    if(hh>=20)
    {
        total=(ceil(H/N))*C*0.8;
        printf("%.4lf\n",total);
    }

    else
    {
        a=(ceil(H/N))*C;
        b=(ceil((((20-hh)*60-mm)*D+H)/N))*C*0.8;
        if(b>a)
            printf("%.4lf\n",a);
        else
            printf("%.4lf\n",b);
    }
}
