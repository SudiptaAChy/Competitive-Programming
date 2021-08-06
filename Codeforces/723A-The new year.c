#include<stdio.h>
main()
{
    int a[100],i,max=0,min=100,d;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];
        if(a[i]<=min)
            min=a[i];
    }
    d=max-min;
    printf("%d\n",d);
}
