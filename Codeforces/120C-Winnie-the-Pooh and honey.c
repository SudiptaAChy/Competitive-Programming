#include<stdio.h>
main(void)
{
    int n,i,k;
    scanf("%d",&n,&k);
    int a[n+1];
    int pig=0;
    int d;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<3)
        {
            pig+=a[i];
        }
        else
        {
            if(a[i]>=3*k)
            {
                pig+=a[i]-3*k;
            }
            else
            {
                pig+=a[i]%k;
            }
        }
    }
    printf("%d",pig);
}
