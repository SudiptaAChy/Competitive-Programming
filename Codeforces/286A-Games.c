#include<stdio.h>
main(void)
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j]==a[i+1][j+1])
                c++;
            if(a[i][j]==a[i-1][j+1])
                c++;
        }
    }
    printf("%d",c);
}
