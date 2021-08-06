#include<stdio.h>
#include<math.h>
main(void)
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum+=i*(n-i);
    }
    printf("%d",sum+n);
}
