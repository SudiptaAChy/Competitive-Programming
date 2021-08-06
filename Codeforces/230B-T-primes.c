#include<stdio.h>
#include<math.h>
main()
{
    long long n,a,i;
    scanf("%lld",&n);
    while(n--)
    {
        int ok=0;
        scanf("%lld",&a);
        if(a%2==0 || a==1)
        {
            if(a==4) printf("YES\n");
            else printf("NO\n");
        }
        else
        {
            long long y=sqrt(a);
            if(y*y==a)
            {
                for(i=3;i*i<=y;i+=2)
                {
                    if(y%i==0)
                    {
                        ok=1;break;
                    }
                }
                if(ok==0) printf("YES\n");
                else printf("NO\n");
            }
            else printf("NO\n");
        }
    }
}
