#include<stdio.h>
main()
{
    int test_case,count,i,n,d,m;
    scanf("%d",&test_case);
    for(i=0;i<test_case;i++)
    {
        count=0;
        scanf("%d",&n);
        while(n)
        {
            d=n/2;
            m=n%2;
            if(m==1)
            {
                count++;
            }
            n=d;
        }
        if(count%2!=0)
            printf("Case %d: odd\n",i+1);
        else
            printf("Case %d: even\n",i+1);
    }
}
