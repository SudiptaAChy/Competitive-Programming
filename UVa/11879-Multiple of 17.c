#include<stdio.h>
main(void)
{
    char a[1009];
    int i,mod;
    while(scanf("%s",a))
    {
        if(a[0]=='0')
            break;
        mod=0;
        for(i=0;a[i];i++)
        {
            mod=(mod*10+(a[i]-'0'))%17;
        }
        if(mod==0) printf("1\n");
        else printf("0\n");
    }
}
