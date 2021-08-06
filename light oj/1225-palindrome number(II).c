#include<stdio.h>
int main(void)
{
    long long n,d,r,rev;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        rev=0;
        d=n;
        while(n)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
            if(n==0)
                break;
        }
        if(rev==d)
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
