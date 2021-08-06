#include<stdio.h>
main()
{
    int a,b,year=0;
    scanf("%d%d",&a,&b);
    while(a<=b)
    {
        a*=3;
        b*=2;
        year++;
    }
    printf("%d",year);
}
