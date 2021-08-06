#include<stdio.h>
#include<stdlib.h>
main(void)
{
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    int a[n-1];
    for(i=1;i<=n-1;i++)
        scanf("%d",&a[i]);
    int indx=1;
    i=1;
    while(i<=n-1)
    {
        i=indx;
        indx=i+a[i];
        if(indx==t)
        {
            printf("YES");
            exit(0);
        }
    }
    printf("NO");
}
