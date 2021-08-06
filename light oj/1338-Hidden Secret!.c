#include<stdio.h>
main(void)
{
    int t,no=1,i,j,k,l;
    long long suma,sumb;
    char a[1000],b[1000];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        suma=0,sumb=0;
        gets(a);
        gets(b);
        for(i=0;a[i];i++)
        {
            if(a[i]!=' ')
            {
                if(a[i]>='A' && a[i]<='Z')
                    suma+=a[i]+32;
                else
                    suma+=a[i];
            }
        }
        for(i=0;b[i];i++)
        {
            if(b[i]!=' ')
            {
                if(b[i]>='A' && b[i]<='Z')
                    sumb+=b[i]+32;
                else
                    sumb+=b[i];
            }
        }
        if(suma==sumb) printf("Case %d: Yes\n",no++);
        else printf("Case %d: No\n",no++);
    }
}
