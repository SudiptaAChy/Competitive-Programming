#include<stdio.h>
#include<stdlib.h>
#define ll long long
int main(void)
{
    ll k2,k3,k5,k6,t,sum=0,t1,t3;

    scanf("%lld%lld%lld%lld",&k2,&k3,&k5,&k6);

    if(k2==0)
    {
        printf("0");
        exit(0);
    }
    else if(k2<k5 && k2<k6)
    {
        t=k2;
        sum+=t*256;
        printf("%lld",sum);
        exit(0);
    }
    else
    {
        t=(k5>k6)?k6:k5;
        sum+=t*256;
        t1=(k2>t)?(k2-t):(t-k2);
        t3=(t1>k3)?k3:t1;
        sum+=t3*32;
        printf("%lld",sum);
    }

    return 0;
}
