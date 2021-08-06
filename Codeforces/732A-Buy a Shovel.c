#include<stdio.h>
main(void)
{
    int k,r,i,a;
    scanf("%d %d",&k,&r);
    i=1;
    while(1)
    {
        a=k*i;
        if(a%10==0 || a%10==r)
            break;
        i++;
    }
    printf("%d",i);
}
