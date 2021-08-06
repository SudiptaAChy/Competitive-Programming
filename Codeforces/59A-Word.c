#include<stdio.h>
#include<ctype.h>
main(void)
{
    char a[100];
    int i,up=0,lo=0;

    scanf("%s",&a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
            lo++;
        else
            up++;
    }

    if(lo>up || lo==up)
    {
        for(i=0;a[i]!='\0';i++)
            a[i]=tolower(a[i]);
    }
    else
        for(i=0;a[i]!='\0';i++)
            a[i]=toupper(a[i]);

    for(i=0;a[i]!='\0';i++)
        printf("%c",a[i]);
}
