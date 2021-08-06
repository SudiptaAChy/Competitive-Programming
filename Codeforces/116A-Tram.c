#include<stdio.h>
main()
{
    int n,enter,exit,i,total=0;
    int max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&exit,&enter);
        total=total-exit+enter;
        if(total>max)
            max=total;
        else
            max=max;
    }
    printf("%d\n",max);
}
