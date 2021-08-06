#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    int i,l;
    scanf("%s",a);
    l=strlen(a);
    if(a[0]!='-')
        printf("%s",a);
    else
    {
        if(l==3 && a[2]=='0')
        {
            printf("0");
        }
        else
        {
            if(a[l-1]>=a[l-2])
            {
                a[l-1]='\0';
            }
            else
            {
                a[l-2]=a[l-1];
                a[l-1]='\0';
            }
            printf("%s",a);
        }
    }
}
