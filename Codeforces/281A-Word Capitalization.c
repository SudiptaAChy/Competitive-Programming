#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[100000];
    int i,length;
    scanf("%s",&a);
    length=strlen(a);
    if(a[0]>='a' && a[0]<='z')
    {
        a[0]=toupper(a[0]);
    }
    printf("%c",a[0]);
    for(i=1;i<length;i++)
        printf("%c",a[i]);
}
