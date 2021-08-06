#include<stdio.h>
main()
{
    int t,no=1;
    int n,d,max;
    scanf("%d",&t);
    while(t--)
    {
        max=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&d);
            if(d>max)
                max=d;
        }
        printf("Case %d: %d\n",no++,max);
    }
}
