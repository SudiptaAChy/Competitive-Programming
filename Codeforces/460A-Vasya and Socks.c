#include<stdio.h>
main(void)
{
    int n,m,d,carry=0,s;
    scanf("%d %d",&n,&m);
    s=n;

    while(1)
    {
        d=n/m;
        s+=d;
        if(d==0)
            break;
        carry=n%m;
        n=d+carry;
    }

    printf("%d",s);
}
