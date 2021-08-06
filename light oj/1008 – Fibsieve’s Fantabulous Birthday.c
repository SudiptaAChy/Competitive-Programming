#include<stdio.h>
#include<math.h>
main()
{
    int t,i;
    long long diagonal,s,a,value;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&s);
        diagonal=ceil(sqrt(s));
        value=diagonal*(diagonal-1)+1;
        if(diagonal%2!=0)
        {
            if((value-s)<0)
            {
                a=s-value;
                printf("Case %d: %lld %lld\n",i,diagonal-a,diagonal);
            }
            else if((value-s)>0)
            {
                a=value-s;
                printf("Case %d: %lld %lld\n",i,diagonal,diagonal-a);
            }
            else if(value==s)
            {
                printf("Case %d: %lld %lld\n",i,diagonal,diagonal);
            }
        }
        else
        {
            if((value-s)<0)
            {
                a=s-value;
                printf("Case %d: %lld %lld\n",i,diagonal,diagonal-a);
            }
            else if((value-s)>0)
            {
                a=value-s;
                printf("Case %d: %lld %lld\n",i,diagonal-a,diagonal);
            }
            else if(value==s)
            {
                printf("Case %d: %lld %lld\n",i,diagonal,diagonal);
            }
        }
    }
}
