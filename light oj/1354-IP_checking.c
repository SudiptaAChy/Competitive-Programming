#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,d,t,no=1;
    int i,j,k,l;
    char binary[10000];

    scanf("%d",&t);
    while(t--)
    {
        int ok=0,suma=0,sumb=0,sumc=0,sumd=0;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%s",binary);

        for(i=0,j=7;i<=7,j>=0;i++,j--)
        {
            suma+=(binary[i]-'0')*(pow(2,j));
        }
        for(i=9,j=7;i<=16,j>=0;i++,j--)
        {
            sumb+=(binary[i]-'0')*(pow(2,j));
        }
        for(i=18,j=7;i<=25,j>=0;i++,j--)
        {
            sumc+=(binary[i]-'0')*(pow(2,j));
        }
        for(i=27,j=7;i<=32,j>=0;i++,j--)
        {
            sumd+=(binary[i]-'0')*(pow(2,j));
        }
        if(suma==a && sumb==b && sumc==c && sumd==d)
            printf("Case %d: Yes\n",no++);
        else printf("Case %d: No\n",no++);
    }

    return 0;
}
