#include<stdio.h>

main()
{
    int i,j,n,t,k;
    int sum;

    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d %d",&i,&j);
        sum=0;
        for(n=i;n<=j;n++)
        {
            if(n%2!=0)
                sum+=n;
        }
        printf("Case %d: %d\n",k,sum);
    }
}
