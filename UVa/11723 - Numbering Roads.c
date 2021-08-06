#include<stdio.h>
#include<math.h>
main()
{
    int d,r,road,alpha,cas=0;
    t:
    scanf("%d %d",&r,&d);
    cas++;
    if(d==0 && r==0)
        goto e;
     else
     {
        alpha=ceil(r*1./d)-1;
        if(alpha>26)
            printf("Case %d: impossible\n",cas);
        else
            printf("Case %d: %d\n",cas,alpha);
        goto t;
     }
    e:
    ;
}
