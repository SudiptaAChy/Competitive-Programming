#include<stdio.h>
main()
{
    int n,r,d,total=0;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%774==0 || n%747==0 || n%777==0)
        printf("YES\n");
    else
    {
        d=n;
        while(d)
        {
            r=d%10;
            d=d/10;
            if(r==4 || r==7)
                total=total+0;
            else
                total=total+1;
            if(d==0)
                break;
        }
        if(total==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
