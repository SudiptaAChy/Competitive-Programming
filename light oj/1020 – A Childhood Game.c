#include<stdio.h>
main()
{
    int t,i;
    long long n,d;
    char name[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %s",&n,&name);
        d=n/2;
        if(n<3)
        {
            if(strcmp(name,"Alice")==0)
            {
                if(n%2==0)
                    printf("Case %d: Alice\n",i);
                else
                    printf("Case %d: Bob\n",i);
            }
            if(strcmp(name,"Bob")==0)
            {
                if(n%2==0)
                    printf("Case %d: Alice\n",i);
                else
                    printf("Case %d: Bob\n",i);
            }
        }
        else
        {
            if(n%2==0)
            {
                if(strcmp(name,"Alice")==0)
                {
                    if(d%2==0)
                        printf("Case %d: Alice\n",i);
                    else
                        printf("Case %d: Bob\n",i);
                }
                if(strcmp(name,"Bob")==0)
                {
                    if(d%2==0)
                        printf("Case %d: Alice\n",i);
                    else
                        printf("Case %d: Bob\n",i);
                }
            }
            else
            {
                if(strcmp(name,"Alice")==0)
                {
                    if(d%2==0)
                        printf("Case %d: Bob\n",i);
                    else
                        printf("Case %d: Alice\n",i);
                }
                if(strcmp(name,"Bob")==0)
                {
                    if(d%2==0)
                        printf("Case %d: Bob\n",i);
                    else
                        printf("Case %d: Alice\n",i);
                }
            }
        }
    }
}
