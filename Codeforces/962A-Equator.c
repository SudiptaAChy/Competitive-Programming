#include<stdio.h>
#include<math.h>
main()
{
    int n,i,sum=0,s=0,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    d=ceil(sum*1.0/2);
    for(i=0;i<n;i++)
    {
        s+=a[i];
        if(s>=d)
            break;
    }
    printf("%d",i+1);
}
