#include<stdio.h>
main(void)
{
    int n,l,i,j,t;
    double k,max;
    scanf("%d %d",&n,&l);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    if(a[0]>l-a[n-1])
        max=a[0];
    else
        max=l-a[n-1];
    for(i=0;i<n-1;i++)
    {
        k=(a[i+1]-a[i])*1.0/2;
        if(k>max)
            max=k;
    }
    printf("%lf",max);
}
