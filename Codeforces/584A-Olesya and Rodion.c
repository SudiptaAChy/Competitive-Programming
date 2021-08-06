#include<stdio.h>
main(void)
{
    int n,t,i,no=0;
    scanf("%d %d",&n,&t);
    if(t==10)
    {
        if(n==1)
        {
            printf("-1");
            no=1;
        }
        else
        {
            for(i=0;i<n-1;i++)
                printf("1");
        }
        if(no==0)
            printf("0");
    }
    else
    {
        for(i=0;i<n;i++)
            printf("%d",t);
    }
}
