#include<stdio.h>
int main(void)
{
    int n,k,i,mem=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]+k<=5)
            mem++;
    }
    mem/=3;
    printf("%d",mem);
    return 0;
}
