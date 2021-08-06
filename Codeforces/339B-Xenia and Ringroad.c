#include<stdio.h>
main(void)
{
    int n,m,i;
    long long s;
    scanf("%d %d",&n,&m);
    int a[m];
    for(i=0;i<m;i++) scanf("%d",&a[i]);
    s=a[0]-1;
    for(i=0;i<m-1;i++)
    {
        if(a[i]>a[i+1])
            s=s+(n-a[i])+a[i+1];
        else
            s=s+(a[i+1]-a[i]);
    }
    printf("%lld",s);
}
