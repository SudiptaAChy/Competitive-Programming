#include<stdio.h>
int main(void)
{
    int n,i,j,k,l,total=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            total++;
    }
    int b[total];
    k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            if(i!=0)
                b[k++]=a[i-1];
        }
    }
    b[k]=a[n-1];
    printf("%d\n",total);
    for(l=0;l<=k;l++) printf("%d ",b[l]);
    return 0;
}
