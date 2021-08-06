#include<stdio.h>
#include<string.h>
main()
{
    char a[1000];
    int i,j,k,l;
    scanf("%s",a);
    l=strlen(a);
    if(a[0]=='-')
        l-=1;
    j=a[l-1]-'0';
    if(l<=3)
        printf("byte");
    else if(l>3&&l<=5&&j>7||j==0)
        printf("short");
    else if(l>5&&l<=10)
        printf("int");
    else if(l>10&&l<=19)
        printf("long");
    else
        printf("BigInteger");
}
