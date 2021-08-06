#include<stdio.h>
#include<math.h>
int main(void)
{
    int t,no=1;
    double n,r,R,PI=acos(-1.0),angle;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf",&R,&n);
        angle=sin(PI/n);
        r=(R*angle)/(1+angle);
        printf("Case %d: %lf\n",no++,r);
    }

    return 0;
}
