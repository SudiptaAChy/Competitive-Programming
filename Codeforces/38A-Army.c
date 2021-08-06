#include<stdio.h>
main(void)
{
    int n,a,b,i;
    scanf("%d",&n);
    int lim=n-1;
    int d[lim];
    for(i=0;i<lim;i++)
        scanf("%d",&d[i]);
    scanf("%d %d",&a,&b);
    int dream=b-a;
    int year=0;
    for(i=a-1;i<=dream;i++)
        year+=d[i];
    printf("%d",year);
}
