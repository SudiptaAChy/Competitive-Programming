#include<stdio.h>
#include<string.h>
main(void)
{
    char a[101],b[101],c[101];
    int i,j,k=0,l;
    scanf("%s %s",&a,&b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i])
            c[k]='0';
        else
            c[k]='1';
        k++;
    }
    for(i=0;i<strlen(a);i++)
        printf("%c",c[i]);
}
