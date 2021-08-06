#include<stdio.h>
#include<math.h>
main(void)
{
    double a,b;
    double ans1,ans2;
    scanf("%lf%lf",&a,&b);
    if(a==b) printf("=");
    else
    {
        ans1=b*log(a),ans2=a*log(b);
        if(ans1==ans2)
        printf("=");
        else if(ans1>ans2)
            printf(">");
        else
            printf("<");
    }
}
