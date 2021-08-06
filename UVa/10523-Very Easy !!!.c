#include<stdio.h>
#include<math.h>
main(void)
{
    int n,a,i;
    long long sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        scanf("%d",&a);
        for(i=1;i<=n;i++)
            sum+=i*pow(a,i);
        printf("%lld\n",sum);
    }
}
