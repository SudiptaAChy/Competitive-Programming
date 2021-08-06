#include<stdio.h>
int main(void)
{
    int n,i,s=0;
    double ans;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    ans=s*1.0/n;
    printf("%lf",ans);
}
