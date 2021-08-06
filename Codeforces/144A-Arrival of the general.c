#include<stdio.h>
#include<math.h>
main()
{
    int a[100],n,i,p1,p2,swap;
    int max=0;
    int min=1000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            p1=i+1;
        }
        else
            max=max;
        if(a[i]<=min)
        {
            min=a[i];
            p2=i+1;
        }
        else
            min=min;
    }
    if(p1<p2)
        swap=abs(p1-1)+abs(p2-n);
    else
        swap=abs(p1-1)+abs(p2-n)-1;
    printf("%d\n",swap);
}
