#include<stdio.h>
main(void)
{
    float h,u,d,f;
    float total,fac;
    int day,down;

    while(scanf("%f%f%f%f",&h,&u,&d,&f))
    {
        day=0,total=0.0,fac=(u*f)/100;
        down=0;
        if(h==0)
            break;
        while(1)
        {
            day+=1;
            total+=u;
            if(total>h)
                break;
            u-=fac;
            total-=d;
            if(total<0)
            {
                down=1;
                break;
            }
        }
        if(down==0) printf("success on day %d\n",day);
        else printf("failure on day %d\n",day);
    }
}
