#include<stdio.h>
int add(int n)
{
    int s=0,r;
    while(n>0)
    {
        r=n%10;
        s+=r;
        n/=10;
    }
    if(s>=10)
        add(s);
    else
        return s;
}
main(void)
{
    char a[1000],b[1000];
    int i,j,k,l;
    int sum1,sum2;
    double percent;
    while(gets(a))
    {
        gets(b);
        sum1=0,sum2=0;
        for(i=0;a[i];i++)
        {
            if((a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z') && a[i]!=' ')
            {
                if(a[i]>='A' && a[i]<='Z')
                    sum1+=a[i]-64;
                else
                    sum1+=a[i]-96;
            }
        }
        for(j=0;b[j];j++)
        {
            if((b[j]>='A' && b[j]<='Z' || b[j]>='a' && b[j]<='z') && b[j]!=' ')
            {
                if(b[j]>='A' && b[j]<='Z')
                    sum2+=b[j]-64;
                else
                    sum2+=b[j]-96;
            }
        }
        sum1=add(sum1);
        sum2=add(sum2);
        if(sum1>sum2)
            percent=(sum2*1.0/sum1)*100;
        else
            percent=(sum1*1.0/sum2)*100;
        printf("%.2lf %%\n",percent);
    }
}
