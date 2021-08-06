#include<stdio.h>
#include<math.h>
main(void)
{
    int n,k,t,s,prob;
    scanf("%d %d",&n,&k);
    t=240-k;
    s=(5*n*(n+1))/2;
    if(s<=t) printf("%d",n);
    else
    {
        t=((240-k)*2)/5;
        int eq=sqrt(1+4*t);
        prob=(-1+eq)/2;
        printf("%d",prob);
    }
}
