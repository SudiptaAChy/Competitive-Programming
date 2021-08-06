#include<stdio.h>
main(void)
{
    int n,i,hh,mm;
    int cash=1;
    int sh=-1,sm=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&hh,&mm);

        if(sh==hh && sm==mm){
            cash++;
        }

        sh=hh;
        sm=mm;
    }
    printf("%d",cash);
}
