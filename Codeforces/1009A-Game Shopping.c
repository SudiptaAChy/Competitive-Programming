#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,m,i,j,k,l,count=0;
    scanf("%d%d",&n,&m);
    int c[n],a[m];
    for(i=0;i<n;i++) scanf("%d",&c[i]);
    for(j=0;j<m;j++) scanf("%d",&a[j]);
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[j]>=c[i])
            {
                c[i]=10000;
                count++;
                break;
            }
            else
            {
                c[i]=10000;
            }
        }
        if(i+1==n)
            break;
    }
    printf("%d",count);
    return 0;
}
