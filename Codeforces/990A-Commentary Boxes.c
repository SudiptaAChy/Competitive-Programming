#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
int main(void)
{
    ll n,m,a,b;
    ll c1,c2,t;
    scanf("%lld%lld%lld%lld",&n,&m,&a,&b);

    if(n%m==0) printf("0");
    else
    {
        if(n>m)
        {
            c1=(n%m)*b;
            c2=(ceil(n*1./m)*m-n)*a;
            t=(c1>=c2)?c2:c1;
            printf("%lld",t);
        }
        else
        {
            c1=(m-n)*a;
            c2=n*b;
            t=(c1>=c2)?c2:c1;
            printf("%lld",t);
        }
    }

    return 0;
}
