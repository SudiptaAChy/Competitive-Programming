#include<stdio.h>
main()
{
    int test,i,n,unit,j;
    int total;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        total=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&unit);
            if(unit>=0)
            {
                total=total+unit;
            }
        }
        printf("Case %d: %d\n",i,total);
    }
}
