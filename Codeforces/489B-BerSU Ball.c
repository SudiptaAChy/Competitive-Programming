#include<stdio.h>
main(void)
{
    int n,m,i,j,count=0,tem;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++) scanf("%d",&b[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }


    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[i]>b[j])
            {
                tem=b[i];
                b[i]=b[j];
                b[j]=tem;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            int diff=(a[i]>b[j])?a[i]-b[j]:b[j]-a[i];
            if(diff<=1)
            {
                count++;
                b[j]=-1000;
                break;
            }
        }
    }
    printf("%d",count);
}
