#include<stdio.h>
int div(char a[],long long b)
{
    long long mod=0,i;
    if(a[0]=='-')
    {
        for(i=1;a[i];i++)
        {
            mod=((mod*10)+(a[i]-'0'))%b;
        }
    }
    else
    {
        for(i=0;a[i];i++)
        {
            mod=((mod*10)+(a[i]-'0'))%b;
        }
    }
    if(mod==0) return 0;
    else return 1;
}
main(void)
{
    int t,no=1;
    char a[1000009];
    long long b;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %lld",a,&b);

        if(div(a,b)==0)
            printf("Case %d: divisible\n",no++);
        else
            printf("Case %d: not divisible\n",no++);
    }
}
